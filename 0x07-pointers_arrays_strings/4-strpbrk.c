#include "main.h"
/**
 * _strpbrk -  a function that searches a string for any of
 * a set of bytes.
 * @s: pointer to var
 * @accept: value to be searched for
 * Return: pointer to the value or NULL if its absent
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (*(s + a) != '\0')
		a++;
	while (*(accept + d) != '\0')
		d++;

	for (b = 0; b < a; b++)
	{
		for (c = 0; c < d; c++)
		{
			if (*(s + b) == *(accept + c))
				return (s + a);
		}
	}

	return ('\0');
}
