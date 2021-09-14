#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function
 * @s: base string
 * @accept:: substring
 *
 * Return: char value
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	char *p;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
		i++;
	}
	return (0);
}
