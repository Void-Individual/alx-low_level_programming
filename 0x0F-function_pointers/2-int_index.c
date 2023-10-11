#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: array to be accessed
 * @size: size of the array
 * @cmp: pointer to function
 * Return: -1 if size <= 0 or no element matches, else return index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array != NULL && cmp != NULL && size <= 0)
		return (-1);

	for (; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}

	return (-1);
}
