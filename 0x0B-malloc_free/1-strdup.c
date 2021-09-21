#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _stdrup - function to duplicate string
 *
 * @str: string to be duplicated
 *
 * Return: char value
 */

char *_strdup(char *str)
{
	int len;
	int i;
	char *p;

	for (len = 0; str[len] != 0; len++)
	{
	}
	p = (char *)malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
	{
		*(p + i) = *(str + i);
	}
	*(p + len) = '\0';
	if (len == 0)
	{
		return (0);
	}
	else
	{
		return (p);
	}
	return (0);
}
