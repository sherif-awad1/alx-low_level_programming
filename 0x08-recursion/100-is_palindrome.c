#include "main.h"

int palhelp(char *s, int str, int end);

/**
 * is_palindrome - check if the string is palindrom
 * @s: the string
 * Return: palhelp
 */

int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (palhelp(s, 0, len - 1));
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
