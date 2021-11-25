#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print out a string
 *
 * @separator: separator of strings
 * @n: number of arguments
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *stringcopy;
	va_list string;

	va_start(string, n);
	while (i < n)
	{
		stringcopy = va_arg(string, char *);
		if (stringcopy == 0)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", stringcopy);
		}
		if (i != n - 1 && separator != 0)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(string);
	printf("\n");
}
