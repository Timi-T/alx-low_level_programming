#include "main.h"
/**
 * print_last_digit - to check if islower
 *
 * @c:  input from user
 *
 * Return: Always 0.
 */

int print_last_digit(int c)
{
	c = c % 10;
	_putchar(c);
	return (c);
}
