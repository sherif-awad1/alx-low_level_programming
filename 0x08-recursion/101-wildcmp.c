#include "main.h"

char *star_recursion(char *s2);
int rel_cmp(char *s1, char *s2);

/**
 * wildcmp - compares tow strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if not equale 1 id equale
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


/**
 * star_recursion - to pass the'*'
 * @s2: the second string
 * Return: s2 or recurtion of the function
 */

char *star_recursion(char *s2)
{
	if (*s2 == '*')
		return (star_recursion(s2 + 1));
	else
		return (s2);
}

/**
 * rel_cmp - to check the cmp
 * @s1: the first string
 * @s2: the sacond string
 * Return: 1 if match 0 if mismatch
 */

int rel_cmp(char *s1, char *s2)
{
	int val;

	val = 0;

	if (s1 == 0)
		return (0);
	if (*s1 == *s2)
		val += wildcmp(s1 + 1, s2 + 1);
	val += rel_cmp(s1 + 1, s2);
	return (val);
}
