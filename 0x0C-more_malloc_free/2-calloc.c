#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function to allocate memory for an array
 *
 * @nmemb: number of elements in the array
 * @size:size of each element in bytes
 *
 * Return: pointer to the arrays address
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = calloc(nmemb, size);
	if (p == 0)
	{
		free(p);
		return (NULL);
	}
	return (p);
}
