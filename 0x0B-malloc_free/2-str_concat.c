#include "main.h"
#include <stdlib.h>

/**
 * _strleng - count the length of string
 * @str: string we count
 * Return: the string
 */

int _strleng(char *str)
{
	int leng;

	while (str[leng] != '\0')
	{
		leng++;
	}
	return (leng);
}

/**
 * *str_concat - concatenates two strings
 * @s1: first strange to concat
 * @s2: the other strange
 * Return: null or the concat string
 */

char *str_concat(char *s1, char *s2)
{

