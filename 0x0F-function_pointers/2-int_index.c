#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 *
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to function to return integer
 *
 * Return: index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
