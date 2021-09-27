#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function to create a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(name) + sizeof(owner) + sizeof(float));
	if (p == 0)
	{
		free(p);
		return (0);
	}
	p->name = name;
	p->owner = owner;
	p->age = age;
	return (p);
}
