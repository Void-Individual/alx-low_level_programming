#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of members
 * @size: size of each element
 * Return: created array, or NULL if calloc fails, or nmemb/size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x = 0;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (; x < (nmemb * size); x++)
	{
		ptr[x] = 0;
	}
	return (ptr);
}
