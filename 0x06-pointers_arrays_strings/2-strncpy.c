#include "main.h"

/**
 * _strncpy - function to copy string
 *
 * @dest: destination to be copied to
 * @src: where string is to be copied from
 * @n: number of characters to be copied from string
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	dest = src;
	while (*src != '\0')
	{
		for (i = 0; i < n; i++)
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	*dest = '\0';
	return (dest);
}
