#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - function to search for an element in an array by binary algo
 *
 * @array: array to search through
 * @size: size of array to search
 * @value: value to search for
 *
 * Return: index position of value or -1 if it doesnt exist
 */

int binary_search(int *array, size_t size, int value)
{
	int half = size / 2;
	int *arr = array;

	if (!arr || !size)
		return (-1);
	print_message(arr, size);
	if (arr[half] > value)
	{
		return (binary_search(arr, half - 1, value));
	}
	else if (arr[half] < value)
	{
		if (size % 2 == 1)
			half += 1;
		return (binary_search(&(arr[half]), size - half, value));
	}
	else
	{
		if (size > 2)
			print_message(&(arr[half]), size -half);
		return (half);
	}
	return (-1);
}

/**
 * print_message - function to print a message
 *
 * @array: array to get information from
 * @size: size of array
 *
 * Return: nothing
 */
void print_message(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array: ");
	while (i < size)
	{
		if (i == size - 1)
		{
			printf("%d\n", array[i]);
			return;
		}
		else
		{
			printf("%d, ", array[i]);
			i++;
		}
	}
}
