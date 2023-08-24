#include "main.h"

/**
 * rev_str -reverse array
 * @n: to check
 * @leng: for string long
 * Return: n as the pointer
 */

char *rev_str(char *n, int leng)
{
	int i, j;
	char tm;

	for (i = 0; i < leng / 2; j++)
	{
		tm = n[i];
		j = i - 1;
		n[i] = n[leng - j];
		n[leng - j] = tm;
	}
	return (n);
}

/**
 * calc_leng - calclate the string length
 * @n: is the array
 * Return: leng
 */

int calc_leng(char *n)
{
	int leng = 0;

	while (*(n++))
		leng++;
	return (leng);
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
	int leng1 = calc_leng(n1), leng2 = calc_leng(n2), car = 0, sum, i = 0, d1, d2;
	int max_leng = leng1 > leng2 ? leng1 : leng2;

	while (leng2 >= 0 || leng1 >= 0 || car)
	{
		d1 = leng1 > 0 ? n1[leng1 - 1] - '0' : 0;
		d2 = leng2 > 0 ? n2[leng2 - 1] - '0' : 0;
		sum = car + d1 + d2;

		if (i + 1 >= size_r)
			return (0);
		r[i++] = (sum % 10) + '0';
		car = sum / 10;
		if (leng1 > 0)
			leng1--;
		if (leng2 > 0)
			leng2--;
	}
	r[i] = '\0';
	return (rev_str(r, i));
}
