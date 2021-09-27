#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialize dog structure
 * @d: dog to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		free(d);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
