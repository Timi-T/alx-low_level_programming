#include "main.h"

/**
 * _puts_recursion - function to print out a string
 *
 * @s: string to print out
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
