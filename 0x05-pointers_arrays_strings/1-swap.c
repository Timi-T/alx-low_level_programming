#include "main.h"

/**
 * swap_int - function to swap numbers
 *
 * @a: first pointer
 * @b: second pointer
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
