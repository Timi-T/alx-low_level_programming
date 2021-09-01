#include <stdio.h>

/**
 * print_to_98 - function to print to 98
 *
 * @n: input from user
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n < 98; n++)
		{
			printf(n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n >= 98)
	{
		for (n = n; n > 98; n--)
		{
			printf(n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf('\n');
	return (0);
}
