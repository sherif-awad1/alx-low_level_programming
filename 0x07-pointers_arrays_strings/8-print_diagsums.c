#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagonal
 * @a: 2d array
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
