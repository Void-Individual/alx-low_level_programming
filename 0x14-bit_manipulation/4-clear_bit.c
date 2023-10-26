#include "main.h"

/**
 * clear_bit - Write a function that sets the value of a bit
 * to 0 at a given index.
 * @n: number value
 * @index: index of bit to be set
 * Return: 1 if it works, else -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);

}
