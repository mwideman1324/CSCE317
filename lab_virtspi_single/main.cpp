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

	read_io(s, IO_MISO);
	for (int i = 0; i < 10; i++){
		write_io(s, IO_SCK, 1);
		delay_cycles(s, 4);
		write_io(s, IO_SCK, 0);
		delay_cycles(s, 4);
	}

	/* your code here */

}

