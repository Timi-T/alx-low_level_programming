#include "main.h"
/**
 * print_square - function to print a square
 *
 * @size: input for size of square
 *
 * Return: always 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

