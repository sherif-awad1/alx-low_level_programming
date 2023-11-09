/*
 * File:sum them all
 *
 * Author: Sherif awad
 */
#include "variadic_functions.h"
/**
 * sum_them_all - the sum of all parameters
 * @n: numbe of argment
 * Return: 0 if n = 0 else return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
