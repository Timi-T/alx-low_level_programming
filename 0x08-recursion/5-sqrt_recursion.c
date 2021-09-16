#include "main.h"

/**
 * _sqrt_recursion - function to get square root of a number
 *
 * @n: number to root
 *
 * Return: always 0
 */

int i = 1;
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (i == n && n != 1)
	{
		return (-1);
	}
	if (n / i == i)
	{
		return (i);
	}
	i++;
	return (_sqrt_recursion(n));
}
