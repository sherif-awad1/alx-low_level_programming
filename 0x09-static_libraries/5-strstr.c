#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: main string
 * @needle: substring look for it in main string
 * Return: heystack or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
