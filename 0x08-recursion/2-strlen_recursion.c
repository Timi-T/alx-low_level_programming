#include "main.h"

/**
 * _strlen_recursion - function to print out lenght of string
 *
 * @s: string to be counted
 *
 * Return: always 0
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
