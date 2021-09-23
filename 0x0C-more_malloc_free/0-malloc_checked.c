#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function to return a malloc ppointer
 *
 * @b: integer to be stored in pointer address
 *
 * Return: always 0
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = (unsigned int *)malloc(sizeof(unsigned int));
	if (p != NULL)
	{
		*p = b;
		return (p);
	}
	else
	{
		exit(98);
	}
	return (0);
}
