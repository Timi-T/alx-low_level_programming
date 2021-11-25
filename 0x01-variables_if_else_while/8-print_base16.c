#include <stdio.h>
/**
 * main - Enrty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int val;
	int num;

	for (val = 48; val <= 57; val++)
	{
		putchar(val);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
