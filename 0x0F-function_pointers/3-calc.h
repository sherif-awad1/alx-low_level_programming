#ifndef _CALC_H
#define _CALC_H
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/**
 * op_add -  returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: a+b
 */
int op_add(int a, int b);
/**
 * op_sub -  returns the sub of a and b
 * @a: first integer
 * @b: second integer
 * Return: a - b
 */
int op_sub(int a, int b);
/**
 * op_mul -  returns the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: a * b
 */
int op_mul(int a, int b);
/**
 * op_div -  returns the division of a and b
 * @a: first integer
 * @b: second integer
 * Return: a / b
 */
int op_div(int a, int b);
/**
 * op_mod -  returns the reminder of a and b
 * @a: first integer
 * * @b: second integer
 * Return: a % b
 */
int op_mod(int a, int b);



int (*get_op_func(char *s))(int, int);
#endif
