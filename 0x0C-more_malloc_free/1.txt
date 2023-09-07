#include "main.h"
#include <stdlib.h>

int _strleng(char *s);
char *create_array(int s);
char *is_zero(char *s);
void _prod(char *prod, char *mul, int d, int z);
void add_n(char *fprod, char *nprod, int nleng);
int is_d(char s);
void print_s(char *s);
void err_r(void);


/**
 * _strleng - the length of a string.
 * @s: The string
 * Return: length of string.
 */
int _strleng(char *s)
{
	int leng = 0;

	while (*s++)
		leng++;

	return (leng);
}

/**
 * create_array - array of chars
 * @s: size of array
 * Return: pointer to array.
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
 * is_zero - a string of numbers containt.
 * @s: string of numbers
 * Return: pointer to non-zero element.
 */
char *is_zero(char *s)
{
	while (*s && *s == '0')
		s++;

	return (s);
}

/**
 * is_d - digit character to int.
 * @s: The character
 * Return: The converted int.
 */
int is_d(char s)
{
	int d = s - '0';

	if (d < 0 || d > 9)
	{
		err_r();
	}

	return (d);
}

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
 * err_r - print the error
 *
 */
void err_r(void)
{
	print_s("Error");
	exit(98);
}


/**
 * _prod - Multiplies numbers by a single digit.
 * @prod: The buffer to store the result.
 * @mul: The string of numbers.
 * @d: The digit.
 * @z: number leading zero
 */
void _prod(char *prod, char *mul, int d, int z)
{
	int mleng, n, t = 0;

	mleng = _strleng(mul) - 1;
	mul += mleng;

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

	for (; mleng >= 0; mleng--, mul--, prod--)
	{
		if (*mul < '0' || *mul > '9')
		{
			err_r();
		}

		n = (*mul - '0') * d;
		n += t;
		*prod = (n % 10) + '0';
		t = n / 10;
	}

	if (t)
		*prod = (t % 10) + '0';
}

/**
 * add_n - Add the numbers in strings.
 * @fprod: storing final product.
 * @nprod: next to be added.
 * @nleng: length of next prod.
 */
void add_n(char *fprod, char *nprod, int nleng)
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
		nleng--;
	}

	for (; nleng >= 0 && *nprod != 'a'; nleng--)
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
 * main - for multiplay 2 integer
 * @argc: count of argments
 * @argv: ponter to the veriabel
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *fprod, *nprod;
	int s, i, d, z = 0;

	if (argc != 3)
		err_r();

	if (*(argv[1]) == '0')
		argv[1] = is_zero(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = is_zero(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	s = _strleng(argv[1]) + _strleng(argv[2]);
	fprod = create_array(s + 1);
	nprod = create_array(s + 1);

	for (i = _strleng(argv[2]) - 1; i >= 0; i--)
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
