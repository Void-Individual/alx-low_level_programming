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

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(sizeof(int) * width);

		if (ptr[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(ptr[a]);
			free(ptr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;
	}

	return (ptr);
}
