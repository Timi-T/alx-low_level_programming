#include "main.h"

/**
 * more_numbers - function to print 1-14
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int j;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (j = 48; j <= 52; j++)
		{

			_putchar(49);
			_putchar(j);
		}
		_putchar('\n');
	}
}
