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
	size_t Left = 0, Right, middle, count = 0;

	if (!array)
		return (-1);

	Right = size;

	printf("Searching in array: ");
	while (count < size)
	{
		printf("%d", array[count]);
		count++;
		if (count == size)
			printf("\n");
		else
			printf(", ");
	}

	while (Left < Right)
	{
		middle = (Left + Right) / 2;
		if (array[middle] < value)
		{
			Left = middle++;
		}
		else if (array[middle] > value)
			Right = middle--;
		else if (array[middle] == value)
			return (middle);
	}

	return (-1);
}
