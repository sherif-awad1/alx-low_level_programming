/*
 * File: print strings
 *
 * Author: Sherif awad
 */
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: separator betwen strings
 * @n: number of argment
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list ptr;

	va_start(ptr, n);


	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
