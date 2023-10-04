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
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = (char *)malloc((ac + 1) * 4);

	if (str == NULL)
		return (NULL);

	for (a = 1, b = 0; a <= ac; a++)
	{
		str[b] = *av[a];
		b++;
		str[b] = '\n';
		b++;
	}
	str[b] = '\0';

	return (str);
}
