#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: to check
 * @src: to check
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int leng, i;

	leng = 0;

	while (dest[leng] != '\0')
	{
		leng++;
	}

	for (i = 0; src[i] != '\0'; i++, ++leng)
	{
		dest[leng] = src[i];
	}
	dest[leng] = '\0';

	return (dest);
}
