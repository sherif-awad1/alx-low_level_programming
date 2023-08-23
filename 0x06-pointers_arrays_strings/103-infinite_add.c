#include "main.h"

/**
 * rev_str -reverse array
 * @n: to check
 */

void rev_str(char *n)
{
	int i = 0, j = 0;
	char tm;

	while (*(n + i) != '\0;)
		i++;
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tm = *(n + j);
		*(n + j ) = *(n + i);
		*(n + i ) = tm;
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



char* infinite_add(char* n1, char* n2, char* r, int size_r)
{
	int leng1 = 0, leng2 = 0, of = 0, e = 0, w = 0, tot = 0, q = 0;

	while (*(n1 + leng1) != '\0')
		leng1++;
	while (*(n2 + leng2) != '\0')
		leng2++;
	leng1--;
	leng2--;
	if (leng2 >= size_r || leng1 >= size _r)
		return (0);
	while (leng2 >= 0 || leng1 >= 0 || of == 1)
	{
		if (leng1 < 0)
			e = 0;
		else
			e = *(n1 + leng1) - '0';
		if (leng2 < 0)
			w = 0;
		else
			w = *(n2 + leng2) -'0';
		tot = e + w + of;
		if (tot >= 10)
			of = 1;
		else
			of = 0;
		if (q >= (size_r - 1))
			return (0);
		*(r + q) = (tot % 10) + '0');
		q++;
		leng1--;
		leng2--;
	}
	if (q == size_r)
		return (0);
	*(r + q) = '\0';
	rev_str(r);
	return (r);
}
