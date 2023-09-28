#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed
 * by a new line.
 * @s: string variable
 * Return: empty
 */

void _puts_recursion(char *s)
{
	char a = *(s + 0);

	if (a == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(a);
	_puts_recursion(s + 1);
}
