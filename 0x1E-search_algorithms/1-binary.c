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
	size_t count = 0, half = size / 2;
	int result;

	if ((!array) | (size == 0))
		return (-1);

	print_array(array, count, size);

	if (value == array[half])
		return ((int)half);
	else if (value < array[half])
		return(binary_search(array, half, value));
	else
	{
		result = binary_search(array + half + 1, size - half - 1, value);
        if (result == -1)
			return (-1);
		else
			return (half + 1 + result);
	}

	return (-1);
}
