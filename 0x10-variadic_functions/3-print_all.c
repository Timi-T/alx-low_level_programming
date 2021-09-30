#include "variadic_functions.h"
#include <stdarg.h>

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
	char *p[] = {"char", "int", "float", "char *"};
	va_list data;

	va_start;

	va_end;
}
