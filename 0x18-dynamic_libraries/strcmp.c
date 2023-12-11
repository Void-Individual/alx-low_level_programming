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
	char a = 0;
	char b = 0;

	for (n = 0; n >= 0; x++, y++)
	{
		a = *(s1 + x);
		b = *(s2 + y);

		if (*(s1 + x) == '\0')
			break;
		if (*(s2 + y) == '\0')
			break;
		n = a - b;

		if (n != 0)
			break;
	}

	return (n);
}
