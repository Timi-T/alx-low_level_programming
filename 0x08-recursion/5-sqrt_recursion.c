#include "main.h"

/**
 * _sqrt_recursion - function to get square root of a number
 *
 * @n: number to root
 *
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
	return (subfunction(n, 1));
}

/**
 * subfunction - function to handle recursion
 *
 * @i: variable to increase
 * @n: number to root
 * Return: int value
 */

int subfunction(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i > n)
	{
		return (-1);

	}
	else
	{
		return (subfunction(n, i + 1));
	}
}
