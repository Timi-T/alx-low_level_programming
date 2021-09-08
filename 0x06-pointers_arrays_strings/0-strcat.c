#include "main.h"

/**
 * _strcat - function to join 2 strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int j;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}
	for (j = 0; src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
