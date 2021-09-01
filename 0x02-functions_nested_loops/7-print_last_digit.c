#include "main.h"
/**
 * print_last_digit - to check if islower
 *
 * @c:  input from user
 *
 * Return: Always 0.
 */

int _abs(int c);
int print_last_digit(int c)
{
	c = _abs(c) % 10;
	return (c);
}
