#include "main.h"

/**
 * _memset - function to set the memory of an address to a specific value
 *
 * @s: string to be operated on
 * @b: value to set memory to
 * @n: number of times to repeat
 *
 * Return: char value
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p;
	unsigned int i;

	p = &s;
	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		*p = b;
		*s = *p;
		p++;
		s++;
	}
	return(s);
}
