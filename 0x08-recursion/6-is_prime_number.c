/*
* File: is_prinm_number
* Author: Sherif Awad
*/
#include "main.h"

/**
 * prime_helper - to check the condition
 * @n: number to check
 * @i: the devider
 * Return: function
 */
int prime_helper(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i + 1));
}
/**
 * is_prime_number - to check if the number is prime or not
 * @n: the integer to check
 * Return: 0 if not prime 1 if prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}
