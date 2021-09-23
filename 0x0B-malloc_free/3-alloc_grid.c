#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function for 2d array
 *
 * @width: width of the array
 * @height: height of array
 *
 * Return: int value
 */

int **alloc_grid(int width, int height)
{
	int i, j, a;
	int **p;

	p = malloc(height *  sizeof(int *));

	if (p == 0)
	{
		return (0);
	}
	for (a = 0; a < height; a++)
	{
		p[a] = malloc(sizeof(int) * width);
		if (p[a] == 0)
		{
			for (a = 0; a < height; a++)
			{
				free(p[a]);
			}
			free(p);
			return (0);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(p + i) + j) = 0;
		}
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	return (p);
}
