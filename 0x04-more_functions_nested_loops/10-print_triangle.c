#include "main.h"
/**
 * print_triangle - function to print a triangle
 *
 * @size: size of triangle
 *
 * Return: alwats 0
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				_putchar(32);
			}
			for (j = size - i; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
