#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print
 * Fizz instead of the number and for the multiples of five
 * print Buzz. For numbers which are multiples
 * of both three and five print FizzBuzz.
 *
 * Return: 0 at the end of the program
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 1; x <= 100; x++)
	{
		y = x % 3;
		z = x % 5;

		if (y == 0)
			printf("Fizz");
		if (z == 0)
			printf("Buzz");
		if (y != 0 && z != 0)
			printf("%d", x);

		putchar(' ');
	}

	return (0);
}
