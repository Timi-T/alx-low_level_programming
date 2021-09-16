#include "main.h"

/**
 * _sqrt_recursion - function to get square root of a number
 *
 * @n: number to root
 *
 * Return: always 0
 */

int _sqrt_recursion(int n, int i)
{
	i = 1;
	if (i >= n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
		return (_sqrt_recursion(n, i + 1));
}










/*
int i = 1;
int _sqrt_recursion(int n)
{
	if (i == 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	}
		i = ((i + (n / i)) / 2) - 1;
		_sqrt_recursion(n);
		return (i);
	}
	return (0);
}*/
