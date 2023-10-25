/*
* File: _putchar.c
* Author: Sherif Awad
*/
#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: strint to reverse and print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
