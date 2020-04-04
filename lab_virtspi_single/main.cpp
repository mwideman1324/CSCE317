/* Copyright 2020 Jason Bakos, Philip Conrad, Charles Daniels */

/* Used and modified by Marquis Wideman for CSCE317, Project lab_virtspi_single
 *
 * HINT: your name is not "Charles Daniels"
 */
#include "support.h"

/* number of SPI SCK cycles per system clock cycle */
#define SPI_CLK_RATIO 16

int main(int argc, char **argv) {

	simulation_state* s = initialize_simulation(argc, argv);

	write_io(s, IO_SCK, 1);
	//pull CS high


	uint8_t bit = 0;
	uint8_t the_data = 0;

	//delay SPI_CLK_RATIO
	delay_cycles(s, SPI_CLK_RATIO/2);

	//Pull CS low
	write_io(s, IO_CS, 0);

	//delay SPI_CLK_RATIO
	delay_cycles(s, SPI_CLK_RATIO/2);

	//Write register for WHO_AM_I register
	for (int i = 7; i >=0; i--)
	{
		bit = ((0x0f) & (1 << i)) != 0;

		//bit = ((0x0f) & (1 << i )) >> i;
		//printf("myData at bit %i is %i\n", i, bit);

		//pull SCK low
		write_io(s, IO_SCK, 0);

		//send bit
		write_io(s, IO_MOSI, bit);

		//delay SPI_CLK_RATIO
		delay_cycles(s, SPI_CLK_RATIO/2);
		
		//pull SCK high
		write_io(s, IO_SCK, 1);
		
		//delay SPI_CLK_RATIO
		delay_cycles(s, SPI_CLK_RATIO/2);
		
	}

	//delay SPI_CLK_RATIO
	delay_cycles(s, SPI_CLK_RATIO/2);

	uint8_t whoAmI = 0;

	//Read data in WHO_AM_I register
	for (int i = 7; i >=0; i--)
	{
		//pull SCK low
		write_io(s, IO_SCK, 0);

		//delay SPI_CLK_RATIO
		delay_cycles(s, SPI_CLK_RATIO/2);

		whoAmI |= (read_io(s, IO_MISO) << i);

		//pull SCK high
		write_io(s, IO_SCK, 1);

		//delay SPI_CLK_RATIO
		delay_cycles(s, SPI_CLK_RATIO/2);

		//bit = (myData & (1 << i)) != 0;
		//printf("myData at bit %i is %i\n", i, bit);
	}

	//delay SPI_CLK_RATIO
	delay_cycles(s, SPI_CLK_RATIO/2);


	printf("whoAMI is: %02x\n", whoAmI);

	if ( whoAmI == 0x34)
	{
		//Write adress of Data address
		for (int i = 0;i<=4; i++)
		{
			the_data = 0;

			bit = (0x10 & (1 << i)) != 0;
			write_io(s, IO_SCK, 0);
			write_io(s, IO_MOSI, bit);
			delay_cycles(s, SPI_CLK_RATIO/2);
			write_io(s, IO_SCK, 1);
			delay_cycles(s, SPI_CLK_RATIO/2);
		}

		delay_cycles(s, SPI_CLK_RATIO/2);

		//read adress of Data address
		for (int i = 0;i<=4; i++)
		{
			write_io(s, IO_SCK, 0);
			delay_cycles(s, SPI_CLK_RATIO/2);
			the_data |= (read_io(s, IO_MISO) << i);
			write_io(s, IO_SCK, 1);
			delay_cycles(s, SPI_CLK_RATIO/2);
			printf("Data is: %02x\n", the_data);

		}
		delay_cycles(s, SPI_CLK_RATIO/2);
	}


	
	//Pull CS high
	write_io(s, IO_CS, 1);

	/*
	read_io(s, IO_MISO);
	for (int i = 0; i < 10; i++){
		write_io(s, IO_SCK, 1);
		delay_cycles(s, 4);
		write_io(s, IO_SCK, 0);
		delay_cycles(s, 4);
	}
	*/

	/* your code here */

}

