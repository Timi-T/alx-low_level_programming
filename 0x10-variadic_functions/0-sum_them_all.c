#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to summ all arguments
 *
 * @n: number of arguments to be summed
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	va_list arguments;

	va_start(arguments, n);
	while (i < n)
	{
		sum += va_arg(arguments, int);
		i++;
	}
	va_end(arguments);
	return (sum);
	if (n == 0)
	{
		return (0);
	}
}
