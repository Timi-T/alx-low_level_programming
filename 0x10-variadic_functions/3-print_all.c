#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - function to print any data type
 *
 * @format: format of the data to be printed
 * @...: variable number of arguments
 *
 * Return: data
 */

void print_all(const char * const format, ...)
{
	const unsigned int len = strlen(format);
	long unsigned int i = 0;
	/*char *selector[] = {"char", "int", "float", "char *"};*/
	char form[] = {'c', 'i', 'f', 's'};
	va_list data;

	va_start(data, format);
	while (i < len)
	{
		if (format[i] == form[i])
		{
			printf("%s", va_arg(data, char *));
		}
		i++;
	}
	va_end(data);
}
