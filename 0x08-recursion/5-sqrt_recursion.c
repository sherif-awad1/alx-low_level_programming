/*
* File: _sqrt_recursion
* Author: Sherif Awad
*/
#include "main.h"

/**
 * sqrt_root - to check the root of integer
 * @n: the number to check the root
 * @x: to check is the number can be squr
 * Return: -1 or x or the function
 */
int sqrt_root(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (sqrt_root(n, x + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - to get sqrt of iinteger
 * @n: the integer
 * Return: the squert root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_root(n, 1));
}
