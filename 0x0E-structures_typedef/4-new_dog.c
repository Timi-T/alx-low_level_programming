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
	char *realname = copy(name);
	char *realowner = copy(owner);
	dog_t *p;

	if (name == 0 || age < 0 || owner == 0)
	{
		return (0);
	}
	p = malloc(sizeof(dog_t));
	if (p == 0)
	{
		return (0);
	}
	p->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (p->name == 0)
	{
		free(p);
		return (0);
	}
	p->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (p->owner == 0)
	{
		free(p->name);
		free(p);
		return (0);
	}
	p->name = realname;
	p->age = age;
	p->owner = realowner;
	return (p);
}

/**
 * copy - function to copy a string from a source to a destination
 *
 * @str: string to be copied
 *
 * Return: copy of string
 */

char *copy(char *str)
{
	int i;
	char *source;
	char *dest;

	source = str;
	dest = malloc(sizeof(source));
	if (dest == 0)
	{
		free(dest);
		return (0);
	}
	for (i = 0; source[i] != '\0'; i++)
	{
		dest[i] = source[i];
	}
	dest[i] = '\0';
	return (dest);
}
