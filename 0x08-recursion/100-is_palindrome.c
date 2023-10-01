#include "main.h"
/**
 * _strlen - function to count length of string
 * @s: string variable
 * Return: length of string
 */

int _strlen(char *s)
{
	char a = *(s + 0);

	if (a == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _palin - function to compare the string
 * @s: string to be compared
 * @y: string length
 * @x: original var 0
 * Return: 1 if palindrome, else 0
 */

int _palin(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
	if (x == y || x == y + 1)
		return (1);
	return (_palin(s, x + 1, y - 1));
	}
	return (0);
}
/**
 * is_palindrome -  a function that returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: sample variable
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int x = _strlen(s);

	return (_palin(s, 0, x - 1));
}
