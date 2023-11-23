/*
 * File: flip_bits
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from on
 * @n: the first number
 * @m: second number
 * Return: returns the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = n ^ m, num = 0;

	while (bit > 0)
	{
		num += (bit & 1);
		bit = bit >> 1;
	}
	return (num);
}
