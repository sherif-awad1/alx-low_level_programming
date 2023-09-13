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

/**
 * int_index - searches for an integer
 * @array: the array of integer
 * @size: size of array
 * @cmp: pointer to function
 * Return: -1 in no element match and i if matach
 */

int int_index(int *array, int size, int (*cmp)(int));
















#endif
