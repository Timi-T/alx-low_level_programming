#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function to create array of integers
 *
 * @min: minimum number
 * @max: maximum number
 *
 * Return: always 0
 */

int *array_range(int min, int max)
{
	int i;
	int len;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	len = (max - min) + 1;
	p = malloc(sizeof(int) * len);
	if (p == 0)
	{
		free(p);
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		*(p + i) = min;
		min++;
	}
	return (p);
}
