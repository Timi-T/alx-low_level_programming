#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print the n number of characters in an array
 *
 * @c: pointer to string
 *
 * Return: always 0
*/

int _putchar(char c);
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
