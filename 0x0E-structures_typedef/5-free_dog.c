#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free dog
 *
 * @d: pointer to dog to free
 *
 * Return: always 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
