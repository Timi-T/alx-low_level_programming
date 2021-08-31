#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
char print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (1);
}
int main(void)
{
	print_alphabet();
	return (0);
}
