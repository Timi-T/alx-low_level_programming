#include "main.h"

/**
 * leet - function to convert some letters to integers
 *
 * @c: string to work on
 *
 * Return: char c
 */

char *leet(char *c)
{
	int i;
	char *p;

	p = c;
	for (i = 0; c[i] != 0; i++)
	{
		if (c[i] == 65 || c[i] == 97)
		{
			p[i] = 52;
			c[i] = p[i];
		}
		else if (c[i] == 69 || c[i] == 101)
		{
			p[i] = 51;
			c[i] = p[i];
		}
		else if (c[i] == 79 || c[i] == 111)
		{
			p[i] = 48;
			c[i] = p[i];
		}
		else if (c[i] == 84 || c[i] == 116)
		{
			p[i] = 55;
			c[i] = p[i];
		}
		else if (c[i] == 76 || c[i] == 108)
		{
			p[i] = 49;
			c[i] = p[i];
		}
	}
	return (c);
}
