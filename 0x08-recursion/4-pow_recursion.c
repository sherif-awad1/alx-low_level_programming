/*
* File: _putchar.c
* Author: Sherif Awad
*/
#include "main.h"

/**
 * _pow_recursion - the get x power of y
 * @x: integer to get the power of it
 * @y: the power
 * Return: -1 if y less than 0 or x power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
