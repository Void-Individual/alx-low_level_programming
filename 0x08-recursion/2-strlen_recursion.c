#include "main.h"
/**
 * _strlen_recursion - a function that returns
 * the length of a string.
 * @s: string variable
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	char a = *(s + 0);

	if (a == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
