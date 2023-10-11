#include "3-calc.h"

/**
 * op_add - function to add 2 numbers
 * @a: value 1
 * @b: value 2
 * Return: added value
 */

int op_add(int a, int b)
{
	int c = a + b;

	return (c);
}

/**
 * op_sub - function to subtract 2 numbers
 * @a: value 1
 * @b: value 2
 * Return: subtracted value
 */

int op_sub(int a, int b)
{
	int c = a - b;

	return (c);
}

/**
 * op_mul - function to multiply 2 numbers
 * @a: value 1
 * @b: value 2
 * Return: the multiplied value
 */

int op_mul(int a, int b)
{
	int c = a - b;

	return (c);
}

/**
 * op_div - function to divide a number
 * @a: value 1
 * @b: value to be divided by
 * Return: divisor
 */

int op_div(int a, int b)
{
	int c = 0;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	c = a / b;

	return (c);
}

/**
 * op_mod - function to get remainder of division
 * @a: value 1
 * @b: value to be divided by
 * Return: remainder value
 */

int op_mod(int a, int b)
{
	int c = 0;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	c = a % b;

	return (c);
}
