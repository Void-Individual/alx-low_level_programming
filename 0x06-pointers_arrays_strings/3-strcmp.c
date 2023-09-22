#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: the value of the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int y = 0;
	int x = 0;
	int n = 0;
	char a = *(s1 + x);
	char b = *(s2 + y);

		n = a - b;

	return (n);
}
