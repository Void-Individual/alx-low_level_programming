#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @src: variable for the source string
 * @dest: varaible with string to be concatenated upon
 * Return: value of dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (x >= 0)
	{
		if (*(dest + x) == '\0')
			break;
		x++;
	}

	while (y >= 0)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}

	return (dest);
}
