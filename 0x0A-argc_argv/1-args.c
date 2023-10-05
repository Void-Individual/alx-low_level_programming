#include <stdio.h>
/**
 * main - a function to print number of arguments
 * @argc: number of argument count
 * @argv: string of arguments
 * Return: 1
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}
	return (1);
}
