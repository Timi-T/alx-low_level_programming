#include "main.h"
/**
 * print_line - function to print a line
 *
 * @n: length of line
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
