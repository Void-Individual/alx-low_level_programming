#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @src: variable for the source string
 * @dest: variable of the string to be concatenated upon
 * @n: variable for number of bytes
 * Return: value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (*(dest + x) != '\0')
		x++;

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
