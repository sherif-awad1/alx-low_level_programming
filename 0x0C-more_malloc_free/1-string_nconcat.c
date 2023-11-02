/*
 * File: string n concatenates 2 string
 *
 * Author: Sherif Awad
 */
#include "main.h"
/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of cocatenates of s2
 * Return: NULL or s3
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0, lens2 = 0, i;
	char *s3;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + lens1) != '\0')
		lens1++;
	while (*(s2 + lens2) != '\0')
		lens2++;
	s3 = malloc(n + lens1 + 1);
	if (s3 == NULL)
		return (s3);

	if (lens2 >= n)
		lens2 = n;

	for (i = 0; i < lens1; i++)
		s3[i] = s1[i];
	for (i = 0; i < n; i++)
		s3[i + lens1] = s2[i];
	s3[i + lens1] = '\0';
	return (s3);
}
