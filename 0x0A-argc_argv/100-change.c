#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments on command line
 * @argv: the actual arguments on the command line
 * Return: always 0
 */
/*int main(int argc, char *argv[])
{
	int i = 0;
	int change = atoi(argv[1]);

	if (argc == 2)
	{
		if (change >= 0)
		{
			if (change >= 25)
			{
				i = i + (change / 25);
				change = change - (25 * (change / 25));
			}
			if (change >= 10 && change < 25)
			{
				i = i + (change / 10);
				change = change - (10 * (change / 10));
			}
			if (change >= 5 && change < 10)
			{
				i = i + (change / 5);
				change = change - (5 * (change / 5));
			}
			if (change > 2 && change < 5)
			{
				i = i + (change / 2);
				change = change - (2 * (change / 2));
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
		return (1);
	}
	printf("%s\n", "Error");
	return (1);
}*/

int main(int argc, char *argv[])
{
	int i = 0;
	int j;
	int c[] = {25, 10, 5, 2, 1};
	int change = atoi(argv[1]);

	if (argc == 2)
	{
		if (change > 0)
		{
			for (j = 0; j < (sizeof(c)/sizeof(int)); j++)
			{
				if (change
