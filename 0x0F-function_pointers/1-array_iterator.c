#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function to perform an action of elements of an array
 *
 * @array: pointer to array to be worked on
 * @size: size of the array
 * @action: pointer to function that works on the array
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != 0 && action != 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
