#include <stdio.h>
/**
 * main - a function to print number of arguments
 * @argc: number of argument count
 * @argv: string of arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}
	argv[0] = argv[0];
	return (0);
}
