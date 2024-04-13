#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted
 * array using the Binary search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: -1 if no array or value, else index of value
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0, index;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (index = left; index <= right; index++)
		{
			printf("%d", array[index]);
			if (index < right)
				printf(", ");
		}
		printf("\n");
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
