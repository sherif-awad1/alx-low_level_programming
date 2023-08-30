#include "main.h"

int palhelp(char *s, int str, int end);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check if the string is palindrom
 * @s: the string
 * Return: palhelp
 */

int is_palindrome(char *s)
{

	if (*s == 0)
		return (1);
	return (palhelp(s, 0, _strlen_recursion(s) - 1));
}

/**
 * palhelp - to check the identical of the str and end mathc
 * @s: the string we check
 * @str: the strt of the string
 * @end: the end of the string
 * Return: recursion of the functuion
 */

int palhelp(char *s, int str, int end)
{
	if (str >= end)
		return (1);
	if (s[str] != s[end])
		return (0);
	return (palhelp(s, str + 1, end - 1));
}

/**
 * _strlen_recursion - get the length of the string
 * @s: the string
 * Return: 0 or the recursion of the function
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
