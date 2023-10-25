/*
* File: _strlen_recursion
* Author: Sherif Awad
*/
#include "main.h"

/**
 * _strlen_recursion - to get the length of string
 * @s: string to count
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
