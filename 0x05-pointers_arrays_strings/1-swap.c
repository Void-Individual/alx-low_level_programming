#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: int variable
 * @b: int variable
 * Return: empty
 */

void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
