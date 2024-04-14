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

/**
 * exponential_search - Function to search for a value in a sorted
 * array of integers using exponential search algorithm
 * @array: pointer to the forst element in the array
 * @size: size of the array
 * @value: value to search for
 * Return: the index of value, else -1
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1, prev, x = 0, y = 0;
	int result;

	if (!array || size == 0)
		return (-1);

	for (; index < size ; x++)
	{
		prev = index;
		for (y = 0, index = 1; y < x; y++)
			index *= 2;

		if (index < size && array[index] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, index);
			result = binary_search(array + prev, index - prev + 1, value);
			if (result >= 0)
				return (result + prev);
			else
				return (-1);
		}
		/*If value is skipped but/and at the end of the array*/
		else if (array[index] > value || index >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, index - 1);
			result = binary_search(array + prev, index - prev, value);
			if (result >= 0)
				return (result + prev);
			else
				return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}
	return (-1);
}
