/*
 * File: mul to multiplies numbers
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * _strlen - the length of string
 * @s: the string
 * Return: the length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * create_array - array of char
 * @s: size of the array
 * Return: the array
 */

char *create_array(int s)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * s);

	if (array == NULL)
		exit(98);

	for (i = 0; i < (s - 1); i++)
		array[i] = 'a';
	array[i] = '\0';
	return (array);
}

/**
 * is_zero - string of numbers
 * @s: string of numbers
 * Return: ponter to non zero
 */

char *is_zero(char *s)
{
	while (*s && *s == 0)
		s++;
	return (s);
}
/**
 * print_s - print the string
 * @s: pointer to the string
 */
void print_s(char *s)
{
	int i;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
/**
 * err_r - print the error
 */
void err_r(void)
{
	print_s("Error");
	_putchar('\n');
	exit(98);
}
/**
 * is_d - to check if its digit
 * @s: the digit
 * Return: error or d
 */
int is_d(char s)
{
	int d = s - '0';

	if (d < 0 || d > 9)
		err_r();
	return (d);
}
/**
 * _prod - Multiplies numbers by single digit
 * @prod: the buffer to store the result
 * @mul: the string of numbers
 * @d: the digit
 * @z: number leading zero
 */

void _prod(char *prod, char *mul, int d, int z)
{
	int mlen, n, t = 0;

	mlen = _strlen(mul) - 1;
	mul += mlen;

	while (*prod)
	{
		*prod = 'a';
		prod++;
	}
	prod--;

	while (z--)
	{
		*prod = '0';
		prod--;
	}
	for (; mlen >= 0; mlen--, mul--, prod--)
	{
		if (*mul < '0' || *mul > '9')
			err_r();
		n = (*mul - '0') * d;
		n += t;
		*prod = (n % 10) + '0';
		t = n / 10;
	}
	if (t)
		*prod = (t % 10) + '0';
}
/**
 * add_n - add the numbers in strings
 * @fprod: storing final product
 * @nprod: next to be added
 * @nlen: length of next prod
 */

void add_n(char *fprod, char *nprod, int nlen)
{
	int n, t = 0;

	while (*(fprod + 1))
		fprod++;
	while (*(nprod + 1))
		nprod++;
	for (; *fprod != 'a'; fprod--)
	{
		n = (*fprod - '0') + (*nprod - '0');
		n += t;
		*fprod = (n % 10) + '0';
		t = n / 10;
		nprod--;
		nlen--;
	}

	for (; nlen >= 0 && *nprod != 'a'; nlen--)
	{
		n = (*nprod - '0');
		n += t;
		*fprod = (n % 10) + '0';
		t = n / 10;
		fprod--;
		nprod--;
	}
	if (t)
		*fprod = (t % 10) + '0';
}
/**
 * main - for Multiplay 2 integer
 * @argc: count of argment
 * @argv: pointer to argment
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	char *fprod, *nprod;
	int s, i, d, z = 0, j;

	if (argc != 3)
		err_r();
	for (j = 0; argv[1][j]; j++)
		if (!isdigit(argv[1][j]))
			err_r();
	for (j = 0; argv[2][j]; j++)
	{
		if (!isdigit(argv[2][j]))
			err_r();
	}
	if (*argv[1] == '0')
		argv[1] = is_zero(argv[1]);
	if (*argv[2] == '0')
		argv[2] = is_zero(argv[2]);
	if (*(argv[1]) == '\0' || (*argv[2]) == '\0')
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	s = _strlen(argv[1]) + _strlen(argv[2]);
	fprod = create_array(s + 1);
	nprod = create_array(s + 1);
	for (i = _strlen(argv[2]) - 1; i >= 0; i--)
	{
		d = is_d(*(argv[2] + i));
		_prod(nprod, argv[1], d, z++);
		add_n(fprod, nprod, s - 1);
	}
	for (i = 0; fprod[i]; i++)
	{
		if (fprod[i] != 'a')
			_putchar(fprod[i]);
	}
	_putchar('\n');
	free(nprod);
	free(fprod);
	return (0);
}
