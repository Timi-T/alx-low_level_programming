#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: count of arguements
 * @argv: arguements
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a;
	int i;
	int j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		a = i + j;
		printf("%d\n", a);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
