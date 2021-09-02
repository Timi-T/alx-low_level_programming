#include "main.h"
/**
 * _isdigit - function to check digits
 *
 * Return: always 0
 *
 * @c: input from user
 */

int _isdigit(int c);
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
