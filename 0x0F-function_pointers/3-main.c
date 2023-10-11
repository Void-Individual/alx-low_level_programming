#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that performs simple operation
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 - success
 */

int main(int argc, char **argv)
{
	int a, b, c;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	operator = argv[2];
	b = atoi(argv[3]);

	operation = get_op_func(operator);


	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	c = operation(a, b);

	printf("%d\n", c);

	return (0);
}
