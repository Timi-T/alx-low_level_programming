#include "main.h"

/**
 * rev_string - function to print a string in reverse order
 *
 * @c: pointer to string
 *
 * Return: always 0
 */

int _putchar(char c);
void rev_string(char *s)
{
	int i;
	int j;

	for (j = 0; s[j] != 0; j++)
	{
	}
	for (i = 0; i < j; i++)
	{
		s[i] = s[j - 1 -i];
	}
	_putchar('\n');
}

