#include "main.h"

/**
 * _strcat - function to join 2 strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int j;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (j = 0; (j < n && src[j] != '\0'); j++, len++)
	{	
		dest[len] = src[j];
	}
	return (dest);
}
