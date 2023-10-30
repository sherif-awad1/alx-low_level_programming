/*
 * File: str_concat to concatenates two string
 *
 * Author: Sherif Awad
 */
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: null or the string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int lens1 = 0, lens2 = 0, i = 0, j = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + lens1))
		lens1++;
	while (*(s2 + lens2))
		lens2++;
	s3 = malloc((lens1 + lens2 + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	while (i < lens1)
	{
		*(s3 + i) = *(s1 + i);
		i++;
	}
	while (j < lens2)
	{
		*(s3 + j + lens1) = *(s2 + j);
		j++;
	}
	return (s3);
}
