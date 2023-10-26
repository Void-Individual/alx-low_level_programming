#include "main.h"

/**
 * binary_to_uint - function to convert binary number
 * to unsigned int
 * @b: string character containing binary
 * Return: binary number, else 0 if b is null or
 * contains char that isnt 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int count = 0;

	if (b == '\0')
		return (0);

	for (; b[count] != '\0'; count++)
	{
		if (b[count] == '0')
			bin = bin << 1;
		else if (b[count] == '1')
			bin = (bin << 1) | 1;
		else
			return (0);
	}

	return (bin);
}
