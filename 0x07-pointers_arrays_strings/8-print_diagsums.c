#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: pointer to 2d array
 * @size: size of the square matrix
 * Return: empty
 */

void print_diagsums(int *a, int size)
{
	int y = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum2 = sum2 + a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
