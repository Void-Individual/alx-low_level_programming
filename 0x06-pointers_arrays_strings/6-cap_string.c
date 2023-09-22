#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @a: string to be capitalized
 * Return: value of a
 */

char *cap_string(char *a)
{
	int z = 0;
	int x = 0;
	char y = 0;

	if (*(a + z) >= 97 || *(a + z) <= 122)
		*(a + z) = *(a + z) - 32;

	while (*(a + z) != '\0')
		z++;
	for (x = 0; x < z; x++)
	{
		y = *(a + x);

		if (y == ' '|| '.')
		{
			x++;
			y = *(a + x);

			if (y >= 97 && y <= 122)
				y = y - 32;

			*(a + x) = y;
			x--;
			break;
		}
	}

	return (a);
}
