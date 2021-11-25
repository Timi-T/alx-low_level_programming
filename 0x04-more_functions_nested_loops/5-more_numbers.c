#include "main.h"

/**
 * more_numbers - function to print 1-14
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
			{
				_putchar(i + 48);
			}
			if (c > 57)
			{
				_putchar(49);
			}
		}
		_putchar('\n');
	}
}
