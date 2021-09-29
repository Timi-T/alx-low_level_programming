#include "function_pointers.h"

/**
 * print_name - function to print a name in a desired case
 *
 * @name: name to be printed
 * @f: function to print in desired case
 *
 * Return: nothing
 */

void print_name(char *name, void(*f)(char *))
{
	if (f != 0 && name != 0)
	{
		f(name);
	}
}

