#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function to create an array
 *
 * @size: size of array
 * @c: character to intitialize with
 *
 * Return: char value
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size != 0)
	{
		p = (char *)malloc(size * sizeof(char));
	}

	for (i = 0; i < size && size != 0; i++)
	{
		*(p + i) = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
	return (0);
}
