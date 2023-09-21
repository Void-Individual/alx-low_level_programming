#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array variable
 * @n: number of elements
 * Return: empty
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int *b = a;
	int y;

	for (n--; n >= 0; n--)
	{
		y = *(a + x);
		*(a + x) = *(b + n);
		*(a + n) = y;
		if (x == n)
			break;
		x++;
	}
}
