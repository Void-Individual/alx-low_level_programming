#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: structure pointer
 * Return: empty
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("(nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
