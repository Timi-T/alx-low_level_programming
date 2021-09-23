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

	p = malloc(sizeof(char) * (sizeof(s1) + strlen(s2)));
	if (p == NULL)
	{
		free(p);
		return (0);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		*(p + i) = *(s1 + i);
	}
	if (n >= strlen(s2))
	{
		total = strlen(s1) + strlen(s2);
	}
	else
	{
		total = strlen(s1) + n;
	}
	for (j = i, a = 0; j < total; j++, a++)
	{
		*(p + j) = *(s2 + a);
	}
	*(p + total) = '\0';
	return (p);
}

