#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers follow by new line
 * @separator: string to print between the nunber
 * @n: number of integer pass by the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);


	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ptr, int));
		}
		else
		{
			printf("%d%s", va_arg(ptr, int), separator);
		}
	}
	printf("\n");

	va_end(ptr);
}
