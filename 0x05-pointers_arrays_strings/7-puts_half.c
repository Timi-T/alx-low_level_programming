#include "main.h"

/**
 * puts_half - function to print half of a string
 *
 * @str: string
 *
 * Return: always 0
 */

void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != 0; i++)
	{

	}
	for (j = 0; j < i; j++)
	{
		if ((i % 2 == 0) && (j >= (i / 2)))
		{
			_putchar(str[j]);
		}
		else if ((i % 2 != 0) && (j > ((i - 1) / 2)))
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
