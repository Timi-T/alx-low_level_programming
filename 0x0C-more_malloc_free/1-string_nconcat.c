#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function to concatenate 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of strings from string 2 to copy
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	long unsigned int i, j, total;
	int a;
	char *s11, *s22;

	if (s1 == NULL)
	{
		s11 = malloc(sizeof(char));
		*s11 = '\0';
	}
	else
	{
		s11 = s1;
	}
	if (s2 == NULL)
	{
		s22 = malloc(sizeof(char));
		s22 = '\0';
	}
	else
	{
		s22 = s2;
	}
	if (s1 == NULL && s2 == NULL)
	{
		p = malloc(sizeof(char));
		*p = '\0';
	}
	else
	{
	p = malloc(sizeof(char) * (sizeof(s11) + strlen(s22)));
	if (p == NULL)
	{
		free(p);
		return (0);
	}
	for (i = 0; i < strlen(s11); i++)
	{
		*(p + i) = *(s11 + i);
	}
	if (n >= strlen(s22))
	{
		total = strlen(s11) + strlen(s22);
	}
	else
	{
		total = strlen(s11) + n;
	}
	for (j = i, a = 0; j < total; j++, a++)
	{
		*(p + j) = *(s22 + a);
	}
	*(p + total) = '\0';
	}
	return (p);
}

