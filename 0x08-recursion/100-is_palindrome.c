/*
* File: _putchar.c
* Author: Sherif Awad
*/
#include "main.h"

/**
 * _strlen_recursion - get the length of the string
 * @s: string to count
 * Return: the function
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * pal_helper - to check if the end and start is equal
 * @s: the string
 * @str: the start of the string
 * @end: end of the string
 * Return: the function
 */
int pal_helper(char *s, int str, int end)
{
	if (str >= end)
		return (0);
	if (s[str] != s[end])
		return (0);
	return (pal_helper(s, str + 1, end - 1));
}
/**
 * is_palindrome - to check if the sting is plindrom or not
 * @s: string to check
 * Return: pal helper
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_helper(s, 0, _strlen_recurstion(s) - 1));
}
