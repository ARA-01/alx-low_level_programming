#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user.
 * @s: The operator that is passed as an argument.
 *
 * Return: A pointer to the function corresponding
 * to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int d = 0;

	while (ops[d].op != NULL && *(ops[d].op) != *s)
		d++;

	return (ops[d].f);
}
