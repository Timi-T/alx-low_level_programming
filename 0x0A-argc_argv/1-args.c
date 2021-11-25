#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of arguments in command line
 * @argv: arguments in command line
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (*argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
