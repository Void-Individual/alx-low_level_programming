#include "main.h"

/**
 * puts2 -  a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: variable of the pointer
 */

void puts2(char *str)
{
	int x = 0;

	while (x >= 0)
	{
		if (str[x] == '\0')
			break;
		_putchar(str[x]);
		x = x + 2;
	}

	_putchar('\n');
}
