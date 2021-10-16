#include "main.h"

/**
 * print_binary - function to print out the binary of a number
 *
 * @n: number to get binary of
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int count = 0, num = n, rem = n;
	int two_pow;

	if (num == 0)
	{
		_putchar(48);
	}
	while (num != 0)
	{
		two_pow = _pow(2, count);
		if (two_pow > num)
		{
			_putchar(49);
			rem = num - (_pow(2, (count - 1)));
			num = rem;
			two_pow = (two_pow >> 2);
			break;
		}
		count++;
	}
	while (two_pow != 0 && n != 0)
	{
		if (num - two_pow >= 0)
		{
			_putchar(49);
			num = num - two_pow;
		}
		else
		{
			_putchar(48);
		}
		two_pow = (two_pow >> 1);
	}
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
