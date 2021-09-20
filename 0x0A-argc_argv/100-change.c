#include <stdio.h>
#include <stdlib.h>

/**
 * @argc: number of arguments
 * @argv: the actual arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int a;
	int change = atoi(argv[1]);

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (argc == 2)
	{
		if (change >= 0)
		{
			if (change >= 25)
			{
				a = change / 25;
				if (a != 0)
				{
					i = a;
				}
				change = change - (25 * a);
			}
			if (change >= 10 && change < 25)
			{
				a = change / 10;
				if (a != 0)
				{
					i = i + a;
				}
				change = change - (10 * a);
			}
			if (change >= 5 && change < 10)
			{
				a = change / 5;
				if (a != 0)
				{
					i = i + a;
				}
				change = change - (5 * a);
			}
			if (change > 2 && change < 5)
			{
				a = change / 2;
				if (a != 0)
				{
					i = i + a;
				}
				change = change - (2 * a);
			}
			if (change < 2)
			{
				i = i + change;
			}
			printf("%d\n", i);
		}
		else
		{
			printf("%d\n", 0);
		}
	}
	return (0);
}
