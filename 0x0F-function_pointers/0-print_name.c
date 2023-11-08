/*
 * File: print name
 *
 * Author: Sherif Awad
 */
#include "function_pointers.h"
/**
 * print_name - print the name
 * @name: string to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
