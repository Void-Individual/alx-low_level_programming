#include <stdlib.h>
#include "main.h"
/**
 * argstostr -  a function that concatenates all the
 * arguments of your program.
 * @ac: argument count
 * @av: argument string
 * Return: argument, else null if ac 0, av null, or fail
 */

char *argstostr(int ac, char **av)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char *str;

	if (ac == 0)
		return (NULL);

	for (c = a = 0; a < ac; a++)
	{
		if (av[a] == NULL)
			return (NULL);

		for (b = 0; av[a][b] != '\0'; b++)
			c++;
		c++;
	}

	str = malloc((c + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (a = b = d = 0; d < c; b++, d++)
	{
		if (av[a][b] == '\0')
		{
			str[d] = '\n';
			a++;
			d++;
			b = 0;
		}
		if (d < c - 1)
			str[d] = av[a][b];
	}
	str[d] = '\0';
	return (str);
}
