#include "main.h"
#include <stdio.h>
/**
 * _strspn - function
 * @s: base string4
 * @accept: substring
 *
 * Return: char value
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int a;
	int b;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; accept[j] != '\0'; j++)
	{
	}
	for (a = 0; a < i && s[a] != ' '; a++)
	{
		for (b = 0; b <= j && accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				x++;
			}
		}
	}
	return (x);
}

