#include "main.h"
#include <stdio.h>
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
	int a = 0;
	char *p;
	char *q;

	q = &c;
	p = s;
	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i && s[j] != '\0'; j++)
	{
		if (s[j] == *q)
		{
			for (a = 0 ; j < i && s[j] != '\0'; j++, a++)
			{
				p[a] = s[j];
			}
			p[a] = '\0';
			break;
		}
	}
	return (p);
}
