#include "main.h"

/**
 * reverse_array - function to reverse an array
 *
 * @a: array
 * @n: number of elemets in the array
 *
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int *p;
	p = a;

	for (i = 0; i < n; i++)
	{
		p[i] = a[n - 1 - i];
		a[i] = p[i];
	}
}
