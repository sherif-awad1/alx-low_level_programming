#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - to print char
 * @argv: list point to the charactor to print
 */

void print_char(va_list argv)
{
	char chars = va_arg(argv, int);

	printf("%c", chars);
}

/**
 * print_integer - print integer number
 * @argv: list point to the number to print
 */
void print_integer(va_list argv)
{
	int integ = va_arg(argv, int);

	printf("%d", integ);
}

/**
 * print_float - to print float point number
 * @argv: list point to float
 */

void print_float(va_list argv)
{
	float flo = va_arg(argv, double);

	printf("%f", flo);
}

/**
 * print_string - to print string
 * @argv: point to list string
 */
void print_string(va_list argv)
{
	char *str = va_arg(argv, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
/**
 * print_all - print any thing
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0, l = 0;
	char *sparator = "";

	pri_t opi[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(ptr, format);

	while (format && (*(format + i)))
	{
		l = 0;
		while (l < 4 && (*(format + i) != *(opi[l].datyp)))
			l++;

		if (l < 4)
		{
			printf("%s", sparator);
			opi[l].pr(ptr);
			sparator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ptr);
}
