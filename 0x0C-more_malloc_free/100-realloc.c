#include <stdlib.h>
#include "main.h"
/**
 * _realloc -  a function that reallocates a memory block
 * @ptr: array pointer
 * @old_size: old size of the array
 * @new_size: size of athe new array
 * Return: ptr, else NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr = malloc(sizeof(unsigned int) * new_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
