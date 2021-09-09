#include "main.h"

/**
 * string_toupper - function to convert lowercase strings to upper case
 *
 * Return: char value
 */

char *string_toupper(char *c)
{
	int i;
	int j;
	char *p;

	p = c;
	for (i = 0; c[i] != '0'; i++)
	{
	}
	for (j = 0; j < i; j++)
	{
		if ((c[j] >= 97) && (c[j] <=122))
		{
			p[j] = c[j] - 32;
			c[j] = p[j];
		}
	}
	return (c);
}
