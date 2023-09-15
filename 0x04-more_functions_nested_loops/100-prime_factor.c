#include <stdio.h>

/**
 * main - a program that finds and prints the largest
 * primefactor of the number 612852475143, followed by a new line.
 * @n: variable
 * Return: 0 (success)
 */

int main(void)
{
	long int n;
	int i;

	n = 612852475143;


	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{

			while (n % i == 0)
			{
				n /= i;
			/*Reduce n by dividing it by its prime factor*/
			}
		}

		if (n == 0)
			printf("%d", i);

	}
	printf("\n");
	return (0);
}
