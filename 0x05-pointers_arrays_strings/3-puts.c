#include "main.h"
/**
 * _puts - function to print out a string
 *
 * @str: string to be printed out
 * @c: string
 * Return: always 0
 */

int _putchar(char c);
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
