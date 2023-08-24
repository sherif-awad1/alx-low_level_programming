#include "main.h"

/**
 * rev_str -reverse array
 * @n: to check
 * Return: 0
 */

void rev_str(char *n)
{
	int i = 0;
	int j = 0;
	char tm;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tm = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tm;
	}
}


/**
* infinite_add - add two number
* @n1: the first number
* @n2: the sacond number
* @r: the buffer to store the result
* @size_r: buffer size
* Return: will be r
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int m = 0, i = 0, j = 0, k = 0;
	int q = 0, w = 0, tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || m == 1)
	{
		if (i < 0)
			q = 0;
		else
			q = *(n1 + i) - '0';
		if (j < 0)
			w = 0;
		else
			w = *(n2 + j) - '0';
		tot = q + w + m;
		if (tot >= 10)
			m = 1;
		else
			m = 0;
		if (k >= (size_r - 1))
			return (0);
		*(r + k) = (tot % 10) + '0';
		k++;
		j--;
		i--;
	}
	if (k == size_r)
		return (0);
	*(r + k) = '\0';
	rev_str(r);
	return (r);
}

