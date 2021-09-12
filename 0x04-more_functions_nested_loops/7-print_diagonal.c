#include "main.h"

/**
 * print_diagonal - function to print / diagonally
 *
 * @c: number of times to print
 *
 * Return: always 0
 */

int _putchar(char c);
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = n - i; j < n; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
