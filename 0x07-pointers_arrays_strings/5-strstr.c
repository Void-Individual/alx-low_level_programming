#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: main pointer
 * @needle: string to be searched for
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y = 0;

	for (x = 0; *(haystack + x) != '\0'; x++)
	{
		if (*(haystack + x) == *(needle + y))
			return (haystack + x);
	}
	return ('\0');
}
