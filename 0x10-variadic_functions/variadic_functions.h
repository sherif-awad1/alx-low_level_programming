#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of atgment
 * Return: 0 if n = 0 else return sum
 */
int sum_them_all(const unsigned int n, ...);
















#endif
