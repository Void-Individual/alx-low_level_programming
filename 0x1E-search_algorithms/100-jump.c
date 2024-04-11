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
	size_t step = sqrt(size), temp, count = 0;

	if (!array)
		return (-1);

	while (count < size)
	{
		if (array[count] >= value)
		{
			temp = count;
			count -= step;
			printf("Value found between indexes [%ld] and [%ld]\n", count, temp);
			for (; count <= temp; count++)
			{
				printf("Value checked array [%ld] = [%d]\n", count, array[count]);
				if (array[count] == value)
					return ((int)count);
			}
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		count += step;
		if (count > size)
		{
			temp = count;
			count -= step;
			printf("Value found between indexes [%ld] and [%ld]\n", count, temp);
			for (; count <= temp; count++)
			{
				if (count == size)
					return (-1);

				printf("Value checked array[%ld] = [%d]\n", count, array[count]);
				if (array[count] == value)
					return ((int)count);
			}
			return (-1);
		}
	}
	return (-1);
}
