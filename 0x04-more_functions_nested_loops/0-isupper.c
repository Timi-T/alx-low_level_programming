#include "main.h"

/**
 * _isupper - function to check case
 *
 * Return: Always 0
 *
 * @c: input from user
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
	/*_putchar('\n');*/
	return (0);
}
