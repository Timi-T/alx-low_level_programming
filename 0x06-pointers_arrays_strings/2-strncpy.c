#include "main.h"
#include <stdio.h>

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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
