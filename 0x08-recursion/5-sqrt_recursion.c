#include "main.h"

int squar_root(int n, int x);

/**
 * _sqrt_recursion - thr natural square root of a number
 * @n: the number
 * Return: call squar_root function
 */

int _sqrt_recursion(int n)
{
	return (squar_root(n, 1));
}

/**
 * squar_root - to get the root
 * @n: take the value
 * @x: take the value
 * Return: result
 */

int squar_root(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (squar_root(n, x + 1));
	else
		return (-1);
}
