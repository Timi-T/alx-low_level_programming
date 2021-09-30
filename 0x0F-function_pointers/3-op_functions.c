#include "3-calc.h"

/**
 * op_add - function to add two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum of two integers
 */

int op_add(int a, int b)
{
	int i;

	i = a + b;
	return (i);
}

/**
 * op_sub - function to subtract two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: subtraction of two integers
 */

int op_sub(int a, int b)
{
	int i;

	i = a - b;
	return (i);
}

/**
 * op_mul - function to multiply two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: multiplication of two integers
 */

int op_mul(int a, int b)
{
	int i;

	i = a * b;
	return (i);
}

/**
 * op_div - function to divide two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: division of two integers
 */

int op_div(int a, int b)
{
	int i;

	i = a / b;
	return (i);
}

/**
 * op_mod - function to find modulo of two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: modulo of two integers
 */

int op_mod(int a, int b)
{
	int i;

	i = a % b;
	return (i);
}
