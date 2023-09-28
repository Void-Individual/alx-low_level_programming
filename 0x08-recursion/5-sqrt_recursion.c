#include "main.h"
/**
 * _square_trials - an attempt to compare number values
 * @n: value that needs to be square rooted
 * @a: square testing values
 * Return: the square root
 */

int _square_trials(int n, int a)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (_square_trials(n, a + 1));
}

/**
 * _sqrt_recursion -  a function that returns the natural
 * square root of a number.
 * @n: value to be examined
 * Return: value of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_square_trials(n, 0));
}
