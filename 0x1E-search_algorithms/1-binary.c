#include <stdio.h>

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
	size_t i = 0;

	if (!arr || !size)
		return (-1);
	if (size == 1 && arr[half] == value)
		return (half);
	printf("Searching in array: ");
	while (i < size)
	{
		if (i == size - 1)
			printf("%d\n", arr[i]);
		else
			printf("%d, ", arr[i]);
		i++;
	}
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
		return (half);
	return (-1);
}
