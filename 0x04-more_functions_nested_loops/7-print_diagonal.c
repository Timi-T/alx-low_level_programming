#include "main.h"
/**
 * print_diagonal - function to print / diagonally
 *
 * @n: number of times to print
 *
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; j < n; i++)
	{
		for (j = n - i; j < n; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
