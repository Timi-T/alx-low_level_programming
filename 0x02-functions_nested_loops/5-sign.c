#include "main.h"

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (00);
	}
	else
	{
		_putchar(43);
		return (1);
	}
}
