#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concarenater two string
 * @s1: first string
 * @s2: 2nd string
 * @n: number of character in every string should be print
 * Return: NULL if fail or pointer if success
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int leng1 = 0, leng2 = 0, i, k;
	char *s3;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (*(s1 + leng1) != '\0')
		leng1++;
	while (*(s2 + leng2) != '\0')
		leng2++;


	s3 = malloc(n + leng1 + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < leng1; i++)
	{
		s3[i] = s1[i];
	}

	for (k = 0; k < n; k++)
		s3[i] = s2[k];

	s3[i] = '\0';
	return (s3);
}
