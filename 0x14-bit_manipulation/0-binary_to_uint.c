#include "main.h"
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - function to convert a binary to integer
 *
 * @b: binary in string format
 *
 * Return: converted number or zero
 */

unsigned int binary_to_uint(const char *b)
{
	const char *s = b;
	unsigned int base_ten = 0;
	int len = strlen(b);
	int count = 0;
	int pow_two;

	if (b == NULL)
	{
		return (0);
	}
	while (*s != '\0')
	{
		if (*s != 48 && *s != 49)
		{
			return (0);
		}
		s++;
	}
	while (*b != '\0')
	{
		if ((*b == 49) && (len - count) <= 32)
		{
			pow_two = len - count - 1;
			base_ten += get_pow(pow_two);
		}
		count++;
		b++;
	}
	return (base_ten);
}

/**
 * get_pow - function to get the max power of two
 *
 * @max_pow_two: maximum power of two as gotten from the binary to int func
 *
 * Return: the maximum power of two
 */

unsigned int get_pow(int max_pow_two)
{
	unsigned int sum;

	sum = (_pow(2, max_pow_two));
	return (sum);
}

/**
 * _pow - function to get the power of a number
 *
 * @base: base number
 * @power: power of
 *
 * Return: the power of the base number
 */

int _pow(int base, unsigned int power)
{
	int base2 = base;

	if (power == 1)
	{
		return (base);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power != 1)
	{
		base *= base2;
		power--;
	}
	return (base);
}
