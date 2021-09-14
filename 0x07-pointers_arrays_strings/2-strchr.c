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
	int i = 0;
	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == c && s[i] != '\0')
		{
			p = &s[i];
			return (p);
		}
		i++;
	}
	return (0);
}
