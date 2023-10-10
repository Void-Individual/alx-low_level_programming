#include "dog.h"
/**
 * init_dog -  a function that initialize a variable of type struct dog
 * @name: name of dog
 * @d: structure name
 * @age: age of dog
 * @owner: owner of dog
 * Return: empty
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
