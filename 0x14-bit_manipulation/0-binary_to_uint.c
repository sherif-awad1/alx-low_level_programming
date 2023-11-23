/*
 * FILE: binary ot uint
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - change form binary to unsigned int
 * @b: pointer to string 0 and 1
 * Return: 0 or the number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, mlt = 1;
	int leng;

	if (b == NULL)
		return (0);
	leng = 0;
	while (b[leng] != '\0')
		leng++;

	for (leng = leng - 1; leng >= 0; leng--)
	{
		if (b[leng] != '0' && b[leng] != '1')
			return (0);
		n += (b[leng] - '0') * mlt;
		mlt *= 2;
	}
	return (n);
}
