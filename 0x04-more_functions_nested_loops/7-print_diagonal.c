#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: variable input to be processed
 * Return: void
 */

void print_diagonal(int n)
{
	int x;
	int y = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			
		}
	}
}
