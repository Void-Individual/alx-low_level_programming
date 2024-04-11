#include "search_algos.h"

/**
 * print_array - Function to print the array
 * @array: array to be printed
 * @min: minimum index
 * @max: maximum index
 * Return: empty
*/

void print_array(int *array, size_t min, size_t max)
{
	printf("Searching in array: ");
	while (min < max)
	{
		printf("%d", array[min]);
		min++;
		if (min == max)
			printf("\n");
		else
			printf(", ");
	}
}

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
	size_t left = 0, right, middle;

	if ((!array) | (value < array[0]) | (value > array[size - 1]))
		return (-1);

	right = size - 1;

	print_array(array, left, size);
	while (left <= right)
	{
		if ((left != 0) | (right != size - 1))
			print_array(array, left, right);

		middle = left + ((right - left) / 2);

		printf("%ld\n", middle);
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle++;
		else
			right = middle--;
	}

	return (-1);
}
