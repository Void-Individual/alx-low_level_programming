#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: pointer to argument string
 * Return: 1 for the program
 */

int main(int argc, char **argv)
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
