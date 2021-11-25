#include "main.h"
/**
 * times_table - function 9 times table
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (k = 48; k <= 57; k++)
		{
			j = i * k;
			_putchar(j);
			if (i < 57)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}	
