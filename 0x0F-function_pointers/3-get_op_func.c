#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>

/**
 * get_op_func - pointer to function to select operator
 * @s: operator
 *
 * Return: i dont even know
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	for (i = 0; i < 5; i++)
	{
		if (*ops[i].op == *s)
		{
			return ((ops[i].f));
		}
	}
	return (0);
}
