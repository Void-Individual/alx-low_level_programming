#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @src: variable of the string to be copied
 * @dest: variable of destination string
 * @n: size limit
 * Return: the value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (y >= 0)
	{
		if (y == n)
			break;
		*(dest + x) = *(src + y);
		x++;
		y++;
	}

	return (dest);
}
