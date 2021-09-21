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
		p = malloc(size * sizeof(char));
		for (i = 0; i < size && size != 0; i++)
		{
			*(p + i) = c;
		}
		*(p + i) = '\0';
		return (p);
	}

	/*for (i = 0; i < size && size != 0; i++)
	{
		*(p + i) = c;
		}
	*(p + i) = '\0';
	if (size == 0)
	{
		p = NULL;
		return (p);
	}*/
	else
	{
		return (NULL);
	}
	return (0);
}
