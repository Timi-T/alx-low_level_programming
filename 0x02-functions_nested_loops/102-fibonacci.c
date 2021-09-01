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
	unsigned long long int f1 = 1;
	unsigned long long int f2 = 2;

	printf("%llu, ", f1);
	for (n = 1; n < 50; n++)
	{
		printf("%llu", f2);
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		if (n < 49)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
