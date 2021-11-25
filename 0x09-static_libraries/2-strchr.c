#include "main.h"

/**
 * _strchr - function
 * @s: base string4
 * @c: substring
 *
 * Return: char value
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	return (s);
}
