#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print to 98
 *
 * @n: input from user
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n < 98; n++)
		{
			printf(n);
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	else if (n >= 98)
		for (n = n; n > 98; n--)
		{
			printf(n);
			if (n != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	_putchar('\n');
	return (0);
}
