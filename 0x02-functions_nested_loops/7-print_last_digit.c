#include "main.h"
/**
 * print_last_digit - to check if islower
 *
 * @c:  input from user
 *
 * Return: Always 0.
 */

int _abs(int c);
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = (-1 * c) % 10;
	}
	else 
	{
		c = c % 10;
	}
	return (c * 11);
}
