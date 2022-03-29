#include <stdio.h>
#include <math.h>

/**
 * jump_search - function to search for an element using jump search algo
 *
 * @array: array to search through
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of value in array
 */

int jump_search(int *array, size_t size, int value)
{
	int *arr = array;
	size_t start = 0;
	size_t stp = sqrt(size);
	size_t jump_step = stp;

	printf("Value checked array[%lu] = [%d]\n", start, arr[start]);
	while (stp < size)
	{
		if (value <= arr[stp])
		{
			printf("Value found between indexes [%lu] and [%lu]\n"
, start, stp);
			while (start <= stp)
			{
				printf("Value checked array[%lu] = [%d]\n",
start, arr[start]);
				if (arr[start] == value)
					return (start);
				start++;
			}
		}
		if (value > arr[stp])
		{
			printf("Value checked array[%lu] = [%d]\n"
, stp, arr[stp]);
			start = stp;
			stp += jump_step;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, stp);

	printf("Value checked array[%lu] = [%d]\n", size - 1, arr[size - 1]);
	return (-1);
}
