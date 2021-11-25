#include "main.h"

/**
 * _strstr: function to check for substring in a string
 *
 * @haystack: base string
 * @needle: substring
 *
 * Return: char value
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int temp;
	char *p;

	while (haystack [i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				temp = i;
				while (haystack[i] == needle[j])
				{
					i++;
					j++;
				}
				if ((temp - i) == j)
				{
					p = &haystack[temp];
					p[j] = '\0';
					return (p);
				}
			}
		}
		i++;
	}
	return (0);
}
