#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct operation to perform
 * @s: operation to perform
 *
 * Return: A pointer to the function corresponding to the operator
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
	int a;

	a = 0;
	while (ops[a].op != NULL)
	{
		if (strcmp(s, ops[a].op) == 0)
			break;
		a++;
	}
	return (ops[a].f);
}
