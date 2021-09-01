#include <stdio.h>
/**
 * main -Entry point
 * 
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;
	int sum;
	int f1 = 1;
	int f2 = 2;

	printf("%d, ", f1);
	for (n = 1; n < 50; n++)
	{
		printf("%d, ", f2);
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
	}
	putchar('\n');
	return (0);
}
