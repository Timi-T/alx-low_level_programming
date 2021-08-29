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

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i+j != j+i && i != j)
			{
				putchar(i);
				putchar(j);
				putchar(44);
				putchar(32);
			}
		}
	}
	return (0);
}	
