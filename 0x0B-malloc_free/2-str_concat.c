#include <stdlib.h>
#include "main.h"
/**
 * str_concat -  a function that concatenates two strings.
 * @s1: main string
 * @s2: string to be copied to s1
 * Return: s1, else null on fail
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char *ptr;

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	c = a + b;

	ptr = (char *)malloc(c - 1);

	if (ptr == NULL)
		return (NULL);

	for (d = 0; d < a; d++)
		ptr[d] = s1[d];

	for (b = 0; d <= c - 1; d++, b++)
		ptr[d] = s2[b];

	return (ptr);
}
