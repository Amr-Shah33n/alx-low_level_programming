#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - return function of input operator
 * @s: operator
 * Return: operation function
 **/
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
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{
			break;
		}
		i++;
	}
	return (ops[i].f);
}

