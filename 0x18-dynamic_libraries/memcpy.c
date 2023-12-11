#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: destination pointer variable
 * @src: variable of info to be copied
 * @n: size of memory to be copied
 * Return: value of dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}

	return (dest);

}
