#include "search_algos.h"

/**
 * linear_search - Function to search for an array of integers
 * using the linear search algorithm
 * @array: pointer to the first element in the array
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: -1 if array is NULL or if value isnt present, else the index
*/

int linear_search(int *array, size_t size, int value)
{
	size_t count = 0;

	if (!array)
		return (-1);

	for (; count < size; count++)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
	}

	return (-1);
}
