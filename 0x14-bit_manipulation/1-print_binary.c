/*
 * File: print_binary
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * print_binary - print the pinary value
 * @n: the number we need to print
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
