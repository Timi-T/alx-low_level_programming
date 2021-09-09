#include "main.h"

/**
 * _strcmp - function to compare two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int len;

	for (i = 0; s1[i] != 0; i++)
	{
	}
	for (j = 0; s2[j] != 0; j++)
	{
	}

	if (i > j)
	for (i = 0; s1[i] != 0; i++)
	{
		{
			len = s1[i] - s2[i];
			if (len != 0)
			{
				return (len);
			}
		}
	}
	return (0);
	}
	if (j > i)
	{
		for (j = 0; s1[j] != 0; i++)
		{
			len = s1[j] - s2[j];
			if (len != 0)
			{
				return (len);
			}
		}
		return (0);
	}
	return (0);
}
