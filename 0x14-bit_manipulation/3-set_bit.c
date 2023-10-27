#include "main.h"

/**
 * set_bit - function that sets the value of
 * a bit to 1 at a given index.
 * @n: pointer to number
 * @index: index of bit you want to set
 * Return: 1 if it worked, else -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || *n == '\0')
		return (-1);

	*n |= 1UL << index;

	return (1);

}
