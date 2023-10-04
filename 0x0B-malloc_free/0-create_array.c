#include <stdlib.h>
#include "main.h"
/**
 * create_array -  a function that creates an array of
 * chars, and initializes it with a specific char.
 * @size: used to determine the length
 * @c: char var
 * Return: pointer to array, else null if it fails or size 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return ('\0');

	ptr = (char *)malloc(1 * size);

	if (ptr == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
