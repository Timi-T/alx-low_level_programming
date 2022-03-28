#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - function to search through an array linearly
 *
 * @array: array to search through
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value in array or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	int *array_copy = array;
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array_copy[i]);
		if (array_copy[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
