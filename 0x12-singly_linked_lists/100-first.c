#include <stdio.h>
#include "lists.h"

/**
 * first - function to allow execution
 * Return: empty
*/

void first(void) __attribute__((constructor));

/**
 * first - function to be executed before main
 * Return: empty
*/

void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
