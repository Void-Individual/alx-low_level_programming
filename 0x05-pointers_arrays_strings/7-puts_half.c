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
	int y = 0;

	while (x >= 0)
	{
		if (str[x] == '\0')
			break;
	}

	n = (x - 1) / 2;

	if (n % 2 == 0)
	{
		while (y <= n)
		{
			_putchar(str[y]);
			y++;
		}
	}

	else if (n % 2 == 1)
	{
		while (y >= n)
		{
			if (y > x)
				break;
			_putchar(str[y]);
			y++;
		}
	}
}
