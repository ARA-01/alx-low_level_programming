#ifndef CALC_H
#define CALC_H

/**
 * struct op - function for struct op
 * @op: operator in the function.
 * @f: function pointer
 */

typedef struct op
{
	char *op;
	int (*f) (int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);



#endif
