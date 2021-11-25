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
	int a;
	int b;
	int len;

	for (i = 0; s1[i] != 0; i++)
	{
	}
	for (j = 0; s2[j] != 0; j++)
	{
	}

	if (i > j)
	{
		for (a = 0; s1[a] != 0; a++)
		{
			if (s1[i] != s2[i] && i <= j)
			{
				len = s1[a] - s2[a];
				if (len != 0)
				{
					return (len);
				}
			}
			else
			{
				len = s1[i - (i - j)];
				return (len);
			}

		}
	}
	if (j > i)
	{
		for (b = 0; s2[b] != 0; b++)
		{
			if (s2[j] != s1[j] && j < i)
			{
				len = s1[b] - s2[b];
				if (len != 0)
				{
					return (len);
				}
			}
			else
			{
				len = s2[j - (j - i)];
				return (len);
			}
		}
	}
	return (0);
}
