#include "main.h"
/**
 * _puts - function to print out a string
 *
 * @c: string
 *
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
