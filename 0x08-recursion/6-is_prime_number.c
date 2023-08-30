#include "main.h"

int prm_help(int n, int i);

/**
 * is_prime_number - prime number
 *
 * @n: an integer to check
 *
 * Return: prm_help
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prm_help(n, 2));
}

/**
 * prm_help - to check the condition
 * @n: number we check
 * @i: the devider
 * Return: recursion
 */

int prm_help(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prm_help(n, i + 1));
}
