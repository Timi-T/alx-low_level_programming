#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function to print numbers in a specific format
 *
 * @separator: separators of the numbers
 * @n: number of integers to be printed out
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i = 0;
	int num;

	va_start(arguments, n);
	while (i < n)
	{
		num = va_arg(arguments, int);
		printf("%d", num);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}
