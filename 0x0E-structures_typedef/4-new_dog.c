#include "dog.h"

/**
 * new_dog - function to create a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(strlen(name) + strlen(owner) + sizeof(float));
	p -> name = name;
	p -> ownwer = owner;
	p -> age = age;
	return (p);
}
