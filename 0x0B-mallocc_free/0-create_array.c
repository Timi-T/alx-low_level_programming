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
	char *p = (char *)malloc(size * sizeof(char));

	*p = c;
	if (size == 0)
	{
		return (0);
	}
	else
	{
		return (p);
	}
	return (0);
}
