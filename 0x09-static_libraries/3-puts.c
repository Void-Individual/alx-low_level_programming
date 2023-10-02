#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line,
 * to stdout.
 * @str: string variable
 * Return: empty
 */

void _puts(char *str)
{
	int x = 0;

	while (x >= 0)
	{
	if (str[x] == '\0')
		break;
	_putchar(str[x]);
	x++;
	}
	_putchar('\n');
}
