#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog.
 * @name: name of new dog
 * @age: age of new dog
 * @owner: name of owner of new dog
 * Return: empty
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namel = 0;
	int ownerl = 0;
	int x = 0;
	dog_t *new_dog;

	new_dog = malloc(sizeof(new_dog));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (; owner[ownerl]; ownerl++)
		;
	for (; name[namel]; namel++)
		;

	new_dog->name = malloc(namel + 1);
	new_dog->owner = malloc(ownerl + 1);

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (; x < namel; x++)
		new_dog->name[x] = name[x];
	new_dog->name[x] = '\0';

	new_dog->age = age;

	for (x = 0; x < ownerl; x++)
		new_dog->owner[x] = owner[x];
	new_dog->owner[x] = '\0';
	return (new_dog);
}
