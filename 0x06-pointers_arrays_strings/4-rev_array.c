#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: to revers
 * @n: number of elements in the array
 */

void reverse_array(int *a, int *n)
{
	int i, reb, rev;

	reb = n - 1;

	for (i = 0; i < n / 2 ; i++)
	{
		rev = a[i];
		a[i] = a[reb];
		a[reb--] = rev;
	}
}

