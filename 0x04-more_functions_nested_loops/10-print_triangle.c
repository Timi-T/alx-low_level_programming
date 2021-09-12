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
	int a;

	for (i = size; i >= 1; i--)
	{
		/*loop for the spaces*/
		for (j = i; j >= 1; j--)
		{
			_putchar(35);
		}
		for (a = 1; a <= i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
