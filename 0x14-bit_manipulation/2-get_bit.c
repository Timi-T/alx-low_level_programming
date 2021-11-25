#include "main.h"
#include <stdlib.h>

/**
 * get_bit - function to get a bit of an index
 *
 * @n: number to get bit from
 * @index: index of bit to get
 *
 * Return: value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = n;
	int bit, i = 0;
	list_bin *binary1 = get_binary(num);
	list_bin *binary2 = binary1;
	unsigned int len = 0;

	while (binary1->next != 0)
	{
		len++;
		binary1 = binary1->next;
	}
	if (index > (len - 1))
	{
		return (-1);
	}
	i = len - index - 1;
	while (i > 0)
	{
		i--;
		binary2 = binary2->next;
	}
	bit = binary2->n;
	return (bit);
}

list_bin *get_binary(unsigned long int n)
{
	int count = 0, num = n, two_pow;
	list_bin *s = malloc(sizeof(list_bin));
	list_bin *head = s;

	if (num == 0)
	{
		s->n = 0;
		s->next = 0;
	}
	while (num)
	{
		two_pow = _pow(2, count);
		if (two_pow > num)
		{
			s->n = 1;
			s = s->next = malloc(sizeof(list_bin));
			num = num - (_pow(2, (count - 1)));
			two_pow = (two_pow >> 2);
			break;
		}
		count++;
	}
	while (two_pow)
	{
		if (num - two_pow >= 0)
		{
			s->n = 1;
			s = s->next = malloc(sizeof(list_bin));
			num = num - two_pow;
		}
		else
		{
			s->n = 0;
			s = s->next = malloc(sizeof(list_bin));
		}
		two_pow = (two_pow >> 1);
	}
	s->next = 0;
	return (head);
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
