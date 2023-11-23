/*
 * FILE: get_bit
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * get_bit - the value of a bit at a given index
 * @n: bit
 * @index: the index
 * Return: index value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
