#include "main.h"

/**
 * _strlen_recursion - the string length
 * @s: the string
 * Return: 0 or the function
 */

int _strlen_recursion(char *s)
{


	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
