#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: pointer to the string to be examined
 * @accept: character to be searched for
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (*(s + a) != '\0')
		a++;
	while (*(accept + b) != '\0')
		b++;

	for (c = 0; c < a; c++)
	{
		for (d = 0; d < (b - 1); d++)
		{
			if (*(s + c) == *(accept + d))
			{
				len++;
				break;
			}
		}

		if (c >= len)
			break;
	}

	return (len);
}
