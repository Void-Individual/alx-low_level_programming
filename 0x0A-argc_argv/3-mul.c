#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies 2 numbers
 * @argc: argument count
 * @argv: argument string
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int x = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	return (0);
}
