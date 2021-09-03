#include "main.h"

/**
 * _isupper - function to check case
 *
 * Return: Always 0
 *
 * @c: input from user
 */

void _isupper(void c);
void _isupper(void c)
{
	int i;
	int j;

	for (i = 65; i < 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	for (j = 97; j < 122; j++)
	{
		if (c == j)
		{
			return (0);
		}
	}
	return (0);
}
