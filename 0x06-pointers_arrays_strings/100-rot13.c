#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @a: variable to be encoded
 * Return: value of a
 */

char *rot13(char *a)
{
	int x = 0;
	int y = 0;
	char z = 0;

	while (*(a + x) != '\0')
		x++;
	for (y = 0; y < x; y++)
	{
		z = *(a + y);

		if ((z >= 97 && z <= 109) || (z >= 65 && z <= 77))
			z = z + 13;
		else if ((z >= 110 && z <= 122) || (z >= 78 && z <= 90))
			z = z - 13;
		*(a + y) = z;
	}

	return (a);
}
