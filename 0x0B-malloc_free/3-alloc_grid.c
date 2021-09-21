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
	int i, j;
	int **d;
	int *p = (int *)malloc(height * width * sizeof(int));

	d = &p;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		return (d);
	}
	return (0);
}
