#include "main.h"

/**
 * factorial - get the factorial of any number
 *
 * @n: the number we need to get the factorial valie
 * Return: 0 if value '-' and 1 if value = 0 the function if the valie is +
 */

int factorial(int n)
{
	if (n < 0)
		return (0);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
