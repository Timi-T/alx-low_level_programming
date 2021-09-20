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

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
