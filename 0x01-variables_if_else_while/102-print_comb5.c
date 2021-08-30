#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = j; i <= 99; i++)
	{
		if (i != j)
		{
			putchar(j / 10 + 48);
			putchar(j % 10 + 48);
			putchar(32);
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);

			if (j * 100 + i != 9899)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
