#include "main.h"

/**
 * *_strcpy - copies the string pointed include (\0)
 * @dest: past the string to it
 * @src: copy the string from it
 * Return: dest copy of str
 */

char *_strcpy(char *dest, char *src)
{
	int leng, a;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}

	for (a = 0; a < leng; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
