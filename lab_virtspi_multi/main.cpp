/* Copyright 2020 Jason Bakos, Philip Conrad, Charles Daniels */

/* Used and modified by Marquis Wideman for CSCE317, Project lab_virtspi_multi
 *
 * HINT: your name is not "Charles Daniels"
 */

#include "support.h"

#define WHO_AM_I 0x0F
#define NPAGE 0x01
#define PAGESEL 0x10
#define OFFSET 0x11
#define VD003_DATA 0x12
#define VD002_DATA 0x10
#define DATACNT 0x11

/* number of SPI SCK cycles per system clock cycle */
#define SPI_CLK_RATIO 16

uint8_t my_Data [128];

uint8_t bit = 0;

uint8_t stream_length;

//perform a "write" mode transaction
void single_write(simulation_state* s, uint8_t data)
{
	for (int i = 7; i>=0; i--)
		{
			bit = ((data) & (1 << i)) != 0;

			//Pull SCK Low
			write_io(s, IO_SCK, 0);


			//send bit
			write_io(s, IO_MOSI, bit);

			//delay SPI_CLK_RATIO
			delay_cycles(s, SPI_CLK_RATIO/2);

			//Pull SCK high
			write_io(s, IO_SCK, 1);

			//delay SPI_CLK_RATIO
			delay_cycles(s, SPI_CLK_RATIO/2);

		}
}

uint8_t spi_read(simulation_state* s)
{
	uint8_t whoAmI = 0;

	for (int i = 7; i>= 0; i--)
	{
		//Pull SCK Low
		write_io(s, IO_SCK, 0);

		//delay SPI_CLK_RATIO
		delay_cycles(s, SPI_CLK_RATIO/2);

		whoAmI |= (read_io(s, IO_MISO) << i);

		//Pull SCK High
		write_io(s, IO_SCK, 1);

		//delay SPI_CLK_RATIO
		delay_cycles(s, SPI_CLK_RATIO/2);
	}
	return whoAmI;
}


void spi_streaming(simulation_state* s, uint8_t stream_length)
{

	single_write(s, VD002_DATA);
	
	delay_cycles(s, SPI_CLK_RATIO/2);

	//transmit data
	for (uint8_t i = 0; i < stream_length; i++)
	{
		my_Data[i] = spi_read(s);
	}
	

}

void spi_offset(simulation_state* s, uint8_t offsetData, uint8_t VD3Data)
{
	//pull CS low
	write_io(s, IO_CS2, 0);

	//write to offset address
	single_write(s, OFFSET | (1<<7));
	
	//write to offset
	single_write(s, offsetData);

	delay_cycles(s, SPI_CLK_RATIO/2);

	//write to address of VD003
	single_write(s, VD003_DATA | (1 << 7));

	//write to data slot
	single_write(s, VD3Data);
	
	//Pull CS High
	write_io(s, IO_CS2, 1);

	delay_cycles(s, SPI_CLK_RATIO/2);
}

	/*uint8_t spi_single(simulation_state* s, simulation_io* CS, uint8_t address)
	{
		write_io(s, CS, 0);
		delay_cycles(s, SPI_CLK_RATIO/2);

		spi_write(s, address);
		delay_cycles(s, SPI_CLK_RATIO/2);

		uint8_t singleVariable = 0;
		
		singleVariable = spi_read(s);

		write_io(s, CS, 1);

		return singleVariable;
	}
	*/
	 
	int main(int argc, char **argv) {
		simulation_state* s = initialize_simulation(argc, argv);
		write_io(s, IO_SCK, 1);

		/* Your code here */
		uint8_t whoAMIVD002 = 0;
		uint8_t whoAMIVD003 = 0;

		//Read and verify WHO_AM_I from VD002 slave
		write_io(s, IO_CS1, 0);
		delay_cycles(s, SPI_CLK_RATIO/2);
		
		single_write(s, WHO_AM_I);
		delay_cycles(s, SPI_CLK_RATIO/2);

		whoAMIVD002 = spi_read(s);
		delay_cycles(s, SPI_CLK_RATIO/2);

		write_io(s, IO_CS1, 1);
		delay_cycles(s, SPI_CLK_RATIO/2);
		
		//Read and verify WHO_AM_I from VD003 slave
		write_io(s, IO_CS2, 0);
		delay_cycles(s, SPI_CLK_RATIO/2);
		
		single_write(s, WHO_AM_I);
		delay_cycles(s, SPI_CLK_RATIO/2);

		whoAMIVD003 = spi_read(s);
		delay_cycles(s, SPI_CLK_RATIO/2);

		write_io(s, IO_CS2, 1);
		delay_cycles(s, SPI_CLK_RATIO/2);

	      printf("whoAMIVD002 is: %02x\n", whoAMIVD002);
	      printf("whoAMIVD003 is: %02x\n", whoAMIVD003);

		     
	       uint8_t num_pages;

	        //read num_pages = VD-003.PAGE
		//set num_pages = num_pages+1
		write_io(s, IO_CS2, 0);
	        single_write(s, NPAGE);
	        num_pages = spi_read(s)+1;
		num_pages = num_pages+1;	
		
		write_io(s, IO_CS2, 1);
		printf("how many pages: %d\n", num_pages);

		//initialize page = 0
		uint8_t page = 0;

		while (page < num_pages)
		{

		write_io(s, IO_CS2, 0);
		
		//set datacount = VD-002.DATACN
		single_write(s, DATACNT);
		stream_length = spi_read(s);
		
		write_io(s, IO_CS2, 1);

		write_io(s, IO_CS1, 0);
		//set sensordata = VD-002.DAT
		spi_streaming(s, stream_length);
		
		write_io(s, IO_CS1, 1);
		//set VD-003.PAGESEL = pag
		
		write_io(s, IO_CS2, 0);

		single_write(s, PAGESEL | (1 << 7));
		single_write(s, page);

		//set VD-003.OFFSET = 0, set VD.003.DATA = 0x11
		spi_offset(s, 0, 0x11);
		
		//set VD-003.OFFSET = 1, set VD.003.DATA = page
		spi_offset(s, 1, page);

		//set VD-003.OFFSET = 2, set VD.003.DATA = datacount
		spi_offset(s, 2, stream_length);
		
		//for i = 0..datacount-1
		for (uint8_t i = 0; i<stream_length-1; i++)
		{
		spi_offset(s, 3+i, my_Data[i]);	
		}
			//set page = page + 1
			page = page+1;
       		
		write_io(s, IO_CS2, 1);
	}
}
