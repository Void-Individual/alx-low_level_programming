#include "main.h"

/**
 * flip_bits - function to return number of bits that youll need
 * to flip to change numbers
 * @n: first number
 * @m: second number
 * Return: number of changed bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int XoR = n ^ m;

	while (XoR > 0)
	{
		count += XoR & 1;
		XoR >>= 1;
	}

	return (count);
}
