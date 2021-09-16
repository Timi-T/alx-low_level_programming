#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - fucntion to check if a string is a palindrome
 *
 * @s: string to be checked
 *
 * Return: always 0
 */

int is_palindrome(char *s)
{
	char *p;

	p = s;
	if (*s != '\0')
	{
		return(is_palindrome(s - 1));
	}
	printf("%s\n", p);
	printf("%s\n", s);
	return (0);
}
