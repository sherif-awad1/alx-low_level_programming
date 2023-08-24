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
* infinite_add - add two number
* @n1: the first number
* @n2: the sacond number
* @r: the buffer to store the result
* @size_r: buffer size
* Return: will be r
*/



char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int leng1 = 0, leng2 = 0, car = 0, sum, i = 0;

	while (n1[leng1] != '\0')
		leng1++;
	while (n2[leng2] != '\0')
		leng2++;
	while (leng2 >= 0 || leng1 >= 0 || car)
	{
		sum = car;
		if (leng1 > 0)
		{
			sum += n1[leng1 - 1] - '0';
			leng1--;
		}
		if (leng2 > 0)
		{
			sum += n2[leng2 - 1] - '0';
			leng2--;
		}
		if (i + 1 >= size_r)
			return (0);
		r[i++] = sum % 10 + '0';
		car = sum / 10;
	}
	r[i] = '\0';
	return (rev_str(r, i));
}
