#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: source variable
 * @dest: variable to be transferred to
 * Return: the value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	for (x = 0; x >= 0; x++)
	{
		dest[x] = src[x];

		if (x == '\0')
			break;
	}
	return (dest);
}
