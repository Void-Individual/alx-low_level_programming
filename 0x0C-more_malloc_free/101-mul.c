#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _isnum - function to determine is a char is num
 * @str: string to be examined
 * Return: 1 if ndigit, else 0
 */

int _isnum(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - a program that multiplies two positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 - success
 */

int main(int argc, char **argv)
{
	int mul = 0;
	int d1 = 0;
	int d2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (_isnum(argv[1]) && _isnum(argv[2]))
	{
		d1 = atoi(argv[1]);
		d2 = atoi(argv[2]);
	}

	else
	{
		printf("Error\n");
		exit(98);
	}
	mul = d1 * d2;

	printf("%d\n", mul);
	return (0);
}
