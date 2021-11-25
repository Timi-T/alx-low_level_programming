#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of arguements in command line
 * @argv: arguements in command line
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
