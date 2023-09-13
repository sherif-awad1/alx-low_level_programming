#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>

int _putchar(char c);

/**
 * print_name - prints the name
 * @name: string name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes a function
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int));













#endif
