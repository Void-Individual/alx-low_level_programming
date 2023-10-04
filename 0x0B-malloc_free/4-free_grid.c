#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: 2-d array
 * @height: array column
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	if (grid != NULL)
	{
		for (a = 0; a < height; a++)
		{
			free(grid[a]);
		}
		free(grid);
	}
}
