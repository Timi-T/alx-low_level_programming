#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function to convert arguments to strings
 *
 * @ac: number of arguments
 * @av: actual arguments
 *
 * Return: always 0
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	char *p;

	for (i = 1; i < ac; i++)
	{
		p = (char *)malloc(ac * sizeof(char) * strlen((av[i])));
	}
	for (j = 0; j < ac; j++)
	{
		*(p + j) = *(av[j]);
	}
	if (ac == 0 && av == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
	free(p);
	return (0);
}
