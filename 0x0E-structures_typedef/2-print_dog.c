#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print a dog
 *
 * @d: poinnter to dog attributes
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: %s\n", "nil");
		}
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: %s\n", "nil");
		}
	}
}
