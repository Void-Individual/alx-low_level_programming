#include "main.h"

/**
 * get_bit - Write a function that returns the value
 * of a bit at a given index.
 * @n: binary value
 * @index: bit you want to get starting from 0
 * Return: value of bit at index, else -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
