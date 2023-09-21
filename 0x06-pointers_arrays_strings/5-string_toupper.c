#include "main.h"

/**
 * string_toupper -  function that changes all lowercase
 * letters of a string to uppercase.
 * @a: lowercase string
 * Return: uppercase string
 */

char *string_toupper(char *a)
{
	int x = 0;
	char y = 0;

	for (x = 0; x >= 0; x++)
	{
		if (*(a + x) == '\0')
			break;

		y = *(a + x);

		if ((y >= 97) && (y <= 122))
			y = y - 32;

		*(a + x) = y;
	}

	return (a);
}
