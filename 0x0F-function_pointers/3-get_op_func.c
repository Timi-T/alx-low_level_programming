#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>

/**
 * get_op_func - pointer to function to select operator
 * s - function to link an operator to function
 * 
 * Return: i dont even know
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	while (i < 6)
	{
		if (ops[i].op == s)
		{
			return ((ops[i].f));
		}
		i++;
	}
	return (0);
}
