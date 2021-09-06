#include "main.h"
/**
 * _puts - function to print out a string
 * _strlen - function to print length of string
 *
 * @str: string to be printed out
 * @s: pointer for the string
 *
 * Return: always 0
 */

int _putchar(char c);
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}

void _puts(char *str)
{
	int i;
	int a;

	a = _strlen(str);
	for (i = 0; i < a; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
