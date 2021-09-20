#include "main.h"

/**
 * _atoi - function to print outintegers
 *
 * @s: string
 *
 * return: always 0
 */

int _atoi(char *s)
{
	int i;
	int j;

	for (j = 0; s[j] != 0; j++)
	{
		for (i = 0; i < 9; i++)
		{
			if (i == s[j])
			{
				return (i);
			}
		}
	}
	return (0);
}
