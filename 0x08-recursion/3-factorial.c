/*
* File: _putchar.c
* Author: Sherif Awad
*/
#include "main.h"

/**
 * factorial - to fint the factoial if integer
 * @n: interger to get the fectirial
 * Return: -1 if 0 of less and 1 if more than 0 els the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
