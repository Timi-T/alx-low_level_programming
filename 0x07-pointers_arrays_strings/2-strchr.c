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
	int i;
	int j;
	int a;
	char **p;

	p = &s;
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i && s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			for (a = 0 ; j < i && s[j] != '\0'; j++, a++)
			{
				**p = s[j];
				s[a] = **p;
			}
			s[a] = '\0';
		}
	}
	return (s);
}
