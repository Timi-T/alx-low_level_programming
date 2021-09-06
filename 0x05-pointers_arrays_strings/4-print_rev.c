#include "main.h"

/**
 * print_rev - function to print a string in reverse order
 *
 * @s: pointer to string
 *
 * Return: always 0
 */

int _putchar(char c);
void print_rev(char *s)
{
	int i;
	int j;

	for (j = 0; s[j] != 0; j++)
	{
	}

	for (i = j; i >= 0;  i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

