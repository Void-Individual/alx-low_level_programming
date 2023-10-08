#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value of array
 * @max: maximum range of array
 * Return: NULL if fails or min < max, else new array
 */

int *array_range(int min, int max)
{
	int x = 0;
	int *ptr;
	int len = max - min;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		ptr[x] = (x + min);
	}

	return (ptr);
}
