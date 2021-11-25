#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
