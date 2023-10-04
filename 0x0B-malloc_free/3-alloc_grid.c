#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid -  function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: column of 2d array.
 * @height: row of 2d array.
 * Return: pointer to the 2d array
 * null on fail, or negative w or h
 */

int **alloc_grid(int width, int height)
{
	int a = 0;
	int b = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(4 * height);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ptr[a] = (int *)malloc(4 * width);

		if (ptr[a] == NULL)
			return (NULL);
		for (b = 0; b < width; b++)
		ptr[a][b] = 0;
	}

	return (ptr);
}
