/*
 * File: get op function
 *
 * Author: Sherif awad
 */
#include "3-calc.h"
#include <stdlib.h>
/**
 * *get_op_fun - pointer to the function
 * @s: pointer to the operator
 * Return: pointer to function
 */

int (*get_op_fun(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
