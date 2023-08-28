#include "main.h"

/**
 * *_strchr - locares a character in a string
 * @s: pointer return the first occurrence
 * @c: indecator to character
 * Return: s or NUll
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
