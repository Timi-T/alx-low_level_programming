#include "main.h"
/**
 * _islower - to check if islower
 *
 * @c:  input from user
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	char i;
	char j;

	for (i = 'a'; i < 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	for (j = 'A'; j < 'Z'; j++)
	{
		if (c == j)
		{
			return (0);
		}
	}
	/*_putchar('\n');*/
	return (0);
}

