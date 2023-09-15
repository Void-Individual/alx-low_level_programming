#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9, except 2 and 4 followed by a new line.
 * Return: void
 */

void print_most_numbers(void)
{
	int x = '0';

	while (x <= '9')
	{
		if (x != '2' && x != '4')
			_putchar(x);
		x++;
	}
	_putchar('\n');
}
