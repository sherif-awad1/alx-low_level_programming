#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @src: the array of lowercase
 * Return: src
 */

char *string_toupper(char *src)
{
	int i;

	int leng = 0;

	for (leng = 0; src[leng] != '\0'; leng++)
	{}

	for (i = 0; i < leng; i++)
	{
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			src[i] = src[i] - 32;
		}
	}
	return (src);
}
