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
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
	}
}
