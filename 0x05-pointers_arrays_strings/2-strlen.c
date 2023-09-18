#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: named of the pointer variable
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}

	return (x);
}
