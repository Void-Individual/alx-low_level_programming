#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 * Return: is empty
 */

void more_numbers(void)
{
	int x = 0;
	int a = 0;

	while (a < 10)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
				_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
		}
		_putchar('\n');
	a++;
	}
}
