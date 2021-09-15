#include "main.h"

/**
 * factorial - function to print factorial of a number
 *
 * @n: number to factorialze
 *
 * Return: always 0
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
