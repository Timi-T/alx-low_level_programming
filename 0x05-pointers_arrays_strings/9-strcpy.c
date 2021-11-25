#include "main.h"

/**
 * _strcpy - function to copy from source to destination
 *
 * @c: string
 *
 * Return: always 0
 */

int _putchar(char c);
char *_strcpy(char *dest, char *src)
{
	int i;
	
	*dest = '\0';
	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	_putchar('\n');
	return (0);
}
