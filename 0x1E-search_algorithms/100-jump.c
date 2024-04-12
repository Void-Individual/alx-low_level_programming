#include "search_algos.h"

/**
 * jump_search - Function to search for a value in a sorted array of
 * integers using the jump search algorithm
 * @array: pointer to the forst element of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: index of the value, else -1 if absent or array is null
*/

int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt((double)size), index, current = 0, x = 1;

	if (!array || size <= 0)
		return (-1);

	while (current < (int)size)
	{
		if (array[current] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", index, current);
			for (; index <= current; index++)
			{
				printf("Value checked array[%d] = [%d]\n", index, array[index]);
				if (array[index] == value)
					return ((int)index);
			}
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		index = current;
		current = step * (x++);
		if (current > (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", index, current);
			for (; index <= current; index++)
			{
				if (index == (int)size)
					return (-1);

				printf("Value checked array[%d] = [%d]\n", index, array[index]);
				if (array[index] == value)
					return ((int)index);
			}
			return (-1);
		}
	}
	return (-1);
}
