#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: string to be examined
 * @c: value to be found
 * Return: NULL if value cant be found, else value from pointer
 */

char *_strchr(char *s, char c)
{
	int x = 0;
	int y = 0;
	int z = 0;
	char *a = 0;

	while (*(s + x) != '\0')
	x++;

	for (y = 0; y < x; y++)
	{
		if (*(s + y) == c)
			break;
		if (*(s + y) == '\0')
			return (0);
	}

	for (z = 0; y < x; y++)
	{
		z++;
		*(a + z) = *(s + y);
	}

	return (a);
}
