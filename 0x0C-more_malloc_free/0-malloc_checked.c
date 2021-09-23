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
	int *p;

	p = (int *)malloc(sizeof(int));
	if (p == 0)
	{
		free(p);
		exit (98);
	}
	if (p != NULL)
	{
		*p = b;
		return (p);
	}
	return (0);
}
