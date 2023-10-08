#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string variable
 * @s2: string to be copied
 * @n: size of s2 to be copied
 * Return: new space in memory, else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1, ls2, lptr, x = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[ls1] != '\0')
		ls1++;
	while (s2[ls2] != '\0')
		ls2++;

	if (n > ls2)
		n = ls2;
	lptr = ls1 + n;

	ptr = malloc(sizeof(char) * (lptr + 1));
	if (ptr == NULL)
		return (NULL);

	for (; x < ls1; x++)
		ptr[x] = s1[x];

	for (ls2 = 0; x < lptr; x++, ls2++)
		ptr[x] = s2[ls2];

	ptr[x] = '\0';

	return (ptr);
}
