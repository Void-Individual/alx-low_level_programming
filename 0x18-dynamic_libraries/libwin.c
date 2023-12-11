#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function to preceed gm
*/

void main(void)
{
	char **argv;
	char *x = *argv;

	if (x[1] == 9 && x[2] == 8 && x[3] == 10 && x[4] == 24
	&& x[5] == 75 && x[6] == 9)
	{
		printf("--> Please make me win!\n");
		exit(0);
	}
}
