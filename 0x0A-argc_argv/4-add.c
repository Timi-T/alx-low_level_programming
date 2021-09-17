#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int num;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num)
			{
				sum += num;
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
