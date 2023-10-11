#include "function_pointers.h"
/**
 * array_iterator -  a function that executes a function given as a
 * parameter on each element of an array.
 * @array: dimension of the array
 * @size: size oof the array/pointer
 * @action: pointer to the function
 * Return: empty
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = 0;

	if (array != NULL && action != NULL)
	{
		for (; x < size; x++)
			action(array[x]);
	}
}
