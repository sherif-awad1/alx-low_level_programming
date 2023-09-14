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
/**
 * print_numbers - prints numbers follow by new line
 * @separator: string to print between the nunber
 * @n: number of integer pass by the function
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings follow by new line
 * @separator: string sperit betwen the string
 * @n: number of argment passed
 */
void print_strings(const char *separator, const unsigned int n, ...);














#endif
