#include "main.h"
/**
 * _cp_test - test for prime numbers
 * @n: number to be tested
 * @a: test numbers
 * Return: 1 if prime, else 0
 */

int _cp_test(int n, int a)
{
	if (a == 1)
		return (1);
	if ((n % a) == 0)
		return (0);
	return (_cp_test(n, a - 1));
}

/**
 * is_prime_number -  a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: input variable
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_cp_test(n, n / 2));
}
