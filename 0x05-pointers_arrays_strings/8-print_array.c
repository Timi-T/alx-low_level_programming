#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print the n number of characters in an array
 *
 * @a: pointer to string
 * @n: number of characters
 *
 * Return: always 0
*/

int _putchar(char c);
void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] <= n; i++)
	{
		_putchar(a[i]);
		if (i < n)
		{
			printf(", ");
		}
	}
}
			
