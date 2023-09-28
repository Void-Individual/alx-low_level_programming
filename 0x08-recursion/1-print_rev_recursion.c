#include "main.h"
/**
 * _print_rev_recursion -  a function that prints a string
 * in reverse.
 * @s: string variable
 * Return: empty
 */

void _print_rev_recursion(char *s)
{
	char a = *(s + 0);

	if (a == '\0')
		return;

	_print_rev_recursion(s + 1);

	_putchar(a);
}
