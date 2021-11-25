#include <stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	int n;
	int f1 = 1;
	int f2 = 2;
	int sum;

	printf("%d, ", f1);
	if (f2 < 4000000)
	{
		for (n = 0;  n++)
		{
			printf("%d", f2);
			if ((f2 < 4000000) && (f2 % 2 = 0))
			{
				sum = f1 + f2;
				f1 = f2;
				f2 = sum;
			}
		}
	}
}

