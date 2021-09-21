#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function to concantenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int a, b, c;
	int total;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	total = i + j;
	p = (char *)malloc((i + j) * sizeof(char));
	for (a = 0; a < i; a++)
	{
		*(p + a) = *(s1 + a);
	}
	for (b = i, c = 0; b < total; b++, c++)
	{
		*(p + b) = *(s2 + c);
	}
	*(p + total) = '\0';

	if (s1 != NULL && s2 != NULL)
	{
		return (p);
	}
	return (0);
}
