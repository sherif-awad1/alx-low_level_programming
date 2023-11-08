/*
 * File: op functions
 *
 * Author: Sherif Awad
 */
#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - add two integer
 * @a: first number
 * @b: second number
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two number
 * @a: 1st number
 * @b: 2nd number
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplay 2 number
 * @a: first number
 * @b: 2nd number
 * Return: mult
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -  returns the division of a and b
 * @a: first integer
 * @b: second integer
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -  returns the reminder of a and b
 * @a: first integer
 * @b: second integer
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
