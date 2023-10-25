/*
* File: wildcmp.c
* Author: Sherif Awad
*/
#include "main.h"
/**
 * star_recursion - fot the start simple
 * @s2: the string
 * Return: recurstion or the string
 */

char *star_recursion(char *s2)
{
	if (*s2 == '*')
		return (star_recursion(s2 + 1));
	else
		return (s2);
}
/**
 * rel_cmp - to compair the string
 * @s1: the first string
 * @s2: second string
 * Return: 1 if match 0 if missmatch
 */
int rel_cmp(char *s1, char *s2)
{
	int val = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		val += wildcmp(s1 + 1, s2 + 1);
	val += rel_cmp(s1 + 1, s2);
	return (val);
}
/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the seconde string
 * Return: 0 if not equale 1 if equel
 */

int wildcmp(char *s1, char *s2)
{
	int val = 0;

	if (!*s1 && *s2 == '*' && !*star_recursion(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s1 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = star_recursion(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			val += wildcmp(s1 + 1, s2 + 1);
		val += rel_cmp(s1, s2);
		return (!!val);
	}
	return (0);
}
