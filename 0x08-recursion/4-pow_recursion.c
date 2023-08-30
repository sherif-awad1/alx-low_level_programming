#include "main.h"

/**
 * _pow_recursion - get the x to power of y
 * @x: the base
 * @y: the power value
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	float tmp;

	if (y == 0)
		return (1);

	else if (y < 0)
		return (-1);

	else if (y % 2 == 0)
	{
		tmp = _pow_recursion(x, y / 2);
		return (tmp * tmp);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
