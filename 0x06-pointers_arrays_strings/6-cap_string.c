#include "main.h"

/**
 * *cap_string - cpitalizes all words of a string
 * @src: ponter to string we want to cpitalizes
 * Return: src
 */

char *cap_string(char *src)
{
	int i, j;

	char sp[13] = {'\n', '\t', ' ', ',', ';', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			src[i] = src[i] - 32;
		}

		for (j = 0; src[j] < 13; j++)
		{
			if (src[i] == sp[j])
			{

				if (src[i++] >= 'a' && src[i++] <= 'z')
				{
					src[i] = src[i] - 32;
				}
			}
		}
	}
	return (src);
}
