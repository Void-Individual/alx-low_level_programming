#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: size of meemory
 * Return: pointer to new memory, but if malloc fails
 * , exit with status value 98
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
