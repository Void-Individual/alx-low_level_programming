#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies 2 numbers
 * @argc: argument count
 * @argv: argument string
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int y = atoi(argv[1]);
	int z = atoi(argv[2]);
	int x = z * y;

	if (argc != 3)
		printf("Error\n");
	else
	{
		printf("%d\n", x);
	}
	return (1);
}
