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

	p = (int **)malloc(width *  sizeof(int *));

	for (a = 0; a < height; a++)
	{
		p[a] = (int *)malloc(sizeof(int) * height);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			*(*(p + i) + j) = 0;
		}
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
	for (a = 0; a < height; a++)
	{
		free(p[a]);
	}
	free(p);
	return (0);
}
