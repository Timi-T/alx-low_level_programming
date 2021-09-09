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
	char *store;
	int j;

	store = dest;
	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	for (i = 0; i < n; i++)
	{
	/*while (*src != '\0')*/
		dest[i] = src[i];
	}
	store[j] = '\0';
	return (store);
}
