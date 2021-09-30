#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point to bring all files together
 *
 * @argc: number of arguments
 * @argv: actual arguments
 *
 * Return: arithmetic operation performed on arguments
 */

int main(int argc, char *argv[])
{
	int a;
	char *b;
	int c;
	int arith;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	a = atoi(argv[1]);
	b = argv[2];
	c = atoi(argv[3]);

	printf("%s\n", b);
	if (*b != + || *b != - || *b != * || *b != / || *b != %)
	{
		printf("%s\n", "Error");
		exit(99);
	}
	if ((*b == 47 || *b == 37) && c == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	arith = (get_op_func(b))(a, c);
	return (arith);
}
