#include <stdio.h>
/**
 * main - a function to print number of arguments
 * @argc: number of argument count
 * @argv: string of arguments
 * Return: 1
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}
	argv[0] = argv[argc];
	return (1);
}
