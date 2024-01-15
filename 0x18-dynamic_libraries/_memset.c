#include "main.h"
/**
 * _memset - memory constant bytes
 * @s: string to check
 * @b: constant byte
 * @n: first n bytes to fill memory
 * Return: string pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
