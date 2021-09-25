#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

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
	unsigned long int j;
	int num;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if ((argv[i][j]) >= 48 && (argv[i][j]) <= 57)
				{
					continue;
				}
				else
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
