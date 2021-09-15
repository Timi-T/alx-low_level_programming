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
	int i;

	if (*s == '\0')
	{
		i = 1;
	}
	/*if (*s != '\0')
	{
		i++;
	}*/
	if (*s != '\0')
	{
	return (i + _strlen_recursion(s));
	}
	return (i);
}
