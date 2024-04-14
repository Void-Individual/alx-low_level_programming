#include "search_algos.h"

/**
 * advanced_binary - finding the index of the first value using binary search
 * @array: pointer to the first element of the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: the index of the first occurence of value, else -1
*/

int advanced_binary(int *array, size_t size, int value)
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
			if (array[mid - 1] == value)
				right = mid;
			else
				return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
