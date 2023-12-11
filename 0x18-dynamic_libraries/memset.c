#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to the variable that'll be modified
 * @b: replacement variable
 * @n: size limit of the change
 * Return: the value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}

	return (s);
}
