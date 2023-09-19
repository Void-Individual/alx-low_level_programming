#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: pointer variable
 * Reverse: empty
 */

void rev_string(char *s)
{
	int y = 0;
	int a = 0;
	int b = y - 1;
	char *x;

	while (y >= 0)
	{
		if (s[y] == '\0')
			break;
		y++;
	}

	x = s;
	while (b >= 0)
	{
		s[a] = x[b];
		a++;
		b--;
	}

	s[y] = '\0';

}
