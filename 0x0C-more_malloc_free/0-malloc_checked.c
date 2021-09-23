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
	void *p;

	p = (unsigned int *)malloc(sizeof(unsigned int));
	if (p == NULL)
	{
		free(p);
		exit (98);
	}
	*p = b;
	return (p);
}
