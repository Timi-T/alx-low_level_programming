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

	if (argc == 3)
	{
		a = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", a);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (1);
}
