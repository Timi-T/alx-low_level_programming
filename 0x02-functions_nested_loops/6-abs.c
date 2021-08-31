#include "main.h"
/**
 * _abs - to check if islower
 *
 * @c:  input from user
 *
 * Return: Always 0.
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = (-1 * c);
	}
	else
	{
		c = c;
	}
	return (c);
}
