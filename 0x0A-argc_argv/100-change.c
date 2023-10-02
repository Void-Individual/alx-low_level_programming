#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to dispense minimum change
 * @argc: argument count
 * @argv: argument string
 * Return: 1 if it cant run, else o
 */

int main(int argc, char *argv[])
{
	int x = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	if (x == 0)
	{
		printf("0\n");
		return (0);
	}

	return (0);
}
