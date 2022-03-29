#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - function to search for an element using interpolation
 *
 * @array: array to search
 * @size: size of array to be searched
 * @value: value to search for
 *
 * Return: index of value in array
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	int high;
	int low;
	int *arr = array;

	if (!arr || !size)
		return (-1);
	high = size - 1;
	low = 0;
	pos = low + (((double)(high - low) / (arr[high] - arr[low]))
* (value - arr[low]));
	if (pos <= size)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, arr[pos]);
		if (arr[pos] > value)
			return (interpolation_search(&array[low], pos - 1, value));
		else if (arr[pos] < value)
		{
			pos += 1;
			return (interpolation_search(&(arr[pos]), size - pos, value));
		}
		else
			return (pos);
	}
	return (-1);
}
