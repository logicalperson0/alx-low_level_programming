#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to
 * perform the operation asked by the user
 *
 * @s: operator passed as arg to the program
 *
 * Return: ptr to the fun
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
		{
			return (ops[i / 2].f);
		}
		i++;
	}
	return (NULL);
}
