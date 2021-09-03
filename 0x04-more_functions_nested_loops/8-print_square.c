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
	
	for (j = 1; j <= size; j++)
	{	
		for (i = 1; i <= size; i++)
		{
			_putchar(35);
		}
		 _putchar('\n');
	}
		 
}

