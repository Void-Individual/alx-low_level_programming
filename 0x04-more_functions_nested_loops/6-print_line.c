#include "main.h"
/**
 *print_line - a function that draws a straight line in the terminal
 *Return: void
 *@n: variable to be added
 */

void print_line(int n)
{
	int x = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (x < n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
