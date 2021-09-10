#include "main.h"
#include <stdio.h>

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
	int *p2;

	p2 = a + n - 1;
	while (p2 > a)
	{
		i = *a;
		*a = *p2;
		*p2 = i;
		a++;
		p2--;
	}
}
