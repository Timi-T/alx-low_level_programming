#include "dog.h"

/**
 * init_dog - function to initialize dog structure
 * @d: dog to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d1;

	d = d1;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
