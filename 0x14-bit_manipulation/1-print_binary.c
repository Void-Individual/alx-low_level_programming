#include "main.h"

/**
 * print_binary - convert dec to bin
 * @n: decimal number
 * Return: empty
*/

void print_binary(unsigned long int n)
{
	int shift;
	int first_zero = 1;
	int bit;
	unsigned long int mask;

	shift = sizeof(unsigned long int ) * 8 - 1;
	while (shift >= 0)
	{
		mask = 1UL << shift;
		bit = (n & mask) != 0;

		if (bit)
		{
			_putchar('1');
			first_zero = 0;
		}

		else if (!first_zero || shift == 0)
			_putchar('0');

		shift--;
	}
}
