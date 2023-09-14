#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings follow by new line
 * @separator: string sperit betwen the string
 * @n: number of argment passed
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
