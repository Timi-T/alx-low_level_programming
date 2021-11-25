#include "main.h"

/**
 * _pow_recursion - function to raise a number to a power
 *
 * @x: number to be raised
 * @y: how many times to raise it
 *
 * Return: always 0;
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
