#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @a: variable of string
 * Return: value of a
 */

char *leet(char *a)
{
	int x = 0;
	char y = 0;
	int z = 0;

	while (*(a + z) !=  '\0')
		z++;

	for (x = 0; x < z; x++)
	{
		y = *(a + x);

		if (y == 'a' || y == 'A')
			y = '4';
		else if (y == 'e' || y == 'E')
			y = '3';
		else if (y == 'o' || y == 'O')
			y = '0';
		else if (y == 'l' || y == 'L')
			y = '1';
		else if (y == 't' || y == 'T')
			y = '7';
		*(a + x) = y;
	}

	return (a);
}

