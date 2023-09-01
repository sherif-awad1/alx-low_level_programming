#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: to check
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
