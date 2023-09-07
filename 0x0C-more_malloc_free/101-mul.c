#include "main.h"
#include <stdlib.h>

/**
 * print_s - print the string
 * @s: pointter to the string
 */

void print_s(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * is_d - check if digit
 * @d: the string
 * Return: 0 or 1 if it digit
 */

int is_d(char *d)
{
	int i = 0;

	while (d[i])
	{
		if (d[i] < '0' || d[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * err_r - print the error
 *
 */
void err_r(void)
{
	print_s("Error ");
	exit(98);
}

/**
 * _strleng - returns the length of a string
 * @c: string to evaluate
 *
 * Return: the length of the string
 */
int _strleng(char *c)
{
	int leng = 0;

	while (c[leng] != '\0')
	{
		leng++;
	}
	return (leng);
}

/**
 * main - for multiplay 2 integer
 * @argc: count of argments
 * @argv: ponter to the veriabel
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int leng1, leng2, leng, i, arry, d1, d2, *result, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_d(str1) || !is_d(str2))
		err_r();
	leng1 = _strleng(str1);
	leng2 = _strleng(str2);
	leng = leng1 + leng2 + 1;
	result = malloc(sizeof(int) * leng);
	if (!result)
		return (1);
	for (i = 0; i <= leng1 + leng2; i++)
		result[i] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		d1 = str1[leng1] - '0';
		arry = 0;
		for (leng2 = _strleng(str2) - 1; leng2 >= 0; leng2--)
		{
			d2 = str2[leng2] - '0';
			arry += result[leng1 + leng2 + 1] + (d1 * d2);
			result[leng1 + leng2 + 1] = arry % 10;
			arry /= 10;
		}
		if (arry > 0)
			result[leng1 + leng2 + 1] += arry;
	}
	for (i = 0; i < leng - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
