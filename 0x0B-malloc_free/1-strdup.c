#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function to duplicate string
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
	p = (char *)malloc((len + 1) * sizeof(char));
	for (i = 0; i < len; i++)
	{
		*(p + i) = *(str + i);
	}
	*(p + len) = '\0';
	if (str == NULL)
	{
		return (0);
	}
	else
	{
		return (p);
	}
	free(p);
	return (0);
}
