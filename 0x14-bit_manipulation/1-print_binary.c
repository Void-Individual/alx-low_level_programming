#include "main.h"

/**
 * print_binary - convert dec to bin
 * @n: decimal number
 * Return: empty
*/

void print_binary(unsigned long int n)
{
	char binary = "";
	char new;

	if (n == 0)
	{
		_putchar(n);
		return;
	}

	while (n >= 0)
	{
		if (n & 1 == 0)
			_putchar('0');
		else
			_putchar('1');
		n = n >> 1;
	}
}
