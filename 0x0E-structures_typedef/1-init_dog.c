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
	dog_t *p;

	p = d;
	p->name = name;
	p->age = age;
	p->owner = owner;
}
