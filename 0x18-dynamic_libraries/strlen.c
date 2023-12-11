#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: named of the pointer variable
 * Return: the length of the string
*/

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
