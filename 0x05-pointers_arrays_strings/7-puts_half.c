#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * If the number of characters is odd, the function should print the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2
 * @str: pointer to the variable
 */

void puts_half(char *str)
{
	int x = 0;
	int n = 0;

	while (x >= 0)
	{
		if (str[x] == '\0')
			break;
	}

	if (x % 2 == 0)
		n = x - 1 / 2;
	else
		n = x / 2;

	while (n <= x)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
