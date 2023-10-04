#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  a function that returns a pointer to a newly allocated
 * space in memory
 * @str: string var
 * Return: NULL if size 0 or insufficient memory, else the duplicated
 * string pointer
 */

char *_strdup(char *str)
{
	int a = 0;
	int b = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[a] != '\0')
		a++;

	ptr = (char *)malloc(a);

	if (ptr == NULL)
		return (NULL);

	for  (b = 0; b < a; b++)
	{
		ptr[b] = str[b];
	}

	return (ptr);
}
