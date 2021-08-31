#include "main.h"

/**
 * main - check the code for ALX School students.
 * print_alphabet - function to print alphabets
 * Return: Always 0.
 */

void print_alphabet(void);
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
