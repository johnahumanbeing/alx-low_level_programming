#include "3-calc.h"

/**
 * get_op_func - the function takes a string as input and based on that  string
 * the function returns a pointer to a function that performs a specific
 * mathematical operation on two inputs and returns the result of
 * that operation
 * @s: the operator passed as arguement to the program
 *
 * Return: the function returns a pointer to a function depending on s
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

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
