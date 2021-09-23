#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to free a 2d array
 *
 * @grid: pointer pointing to the 2d array
 * @height: height of 2d array
 *
 * Return: always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
