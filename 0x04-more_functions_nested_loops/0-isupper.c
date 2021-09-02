#include "main.h"
#include <stdio.h>
/**
 * int _isupper - function to check case
 *
 * Return: Always 0
 *
 * @c:
 */
int _isupper(int c)
{
	int i;
	int j;

	for (i = 'A'; i < 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	for (j = 'a'; j < 'z'; j++)
	{
		if (c == j)
		{
			return (0);
		}
	}
	putchar('\n');
	return (0);
}
