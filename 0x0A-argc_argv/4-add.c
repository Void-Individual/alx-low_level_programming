#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds 2 numbers
 * @argc: argument count
 * @argv: argument string
 * Return: 1 it cant, else 0
 */

int main(int argc, char *argv[])
{
	int x = 0;
	int count = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (count = 1; count < argc; count++)
	{
		x = *argv[count];
		if (!isdigit(x))
		{
			printf("Error\n");
		return (1);
		}
	}

	for (count = 1; count < argc; count++)
	{
		x = atoi(argv[count]);
		sum = sum + x;
	}

	printf("%d\n", sum);
	return (1);
}
