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
	int n;
	int y = 0;
	int z;
	int a;

	while (x >= 0)
	{
		if (str[x] == '\0')
			break;
	}

	z = x - 1;
	n = z / 2;
	a = n % 2;

	if (a > 0)
	{
		y = n;
		while (y <= x)
		{
			_putchar(str[y]);
			y++;
		}
	}

}
