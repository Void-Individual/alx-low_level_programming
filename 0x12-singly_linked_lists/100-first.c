#include <stdio.h>
#include "lists.h"

/**
 * first - execute function before main
 * Return: empty
*/

void first(void) __attribute__((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
