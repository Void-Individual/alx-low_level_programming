#include <stdio.h>
/**
 * main - a function that prints out the arguments it recieves
 * @argc: argument count
 * @argv: argument string
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int count = 0;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (1);
}
