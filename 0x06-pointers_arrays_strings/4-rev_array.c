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
	int j;
	int *p;

	p = a;
	for (i = n - 1, j = 0; i >= 0; i--, j++)
	{
		p[j] = a[i];
	}
	/*for (i = 0; i < n; i++)
	{
		a[i] = p[i];
	}*/
}
