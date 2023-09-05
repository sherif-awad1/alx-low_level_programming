#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 * @str: The string to count
 *
 * Return: The number of words in the string
 */
int word_count(char *str)
{
	int i, wc = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			++wc;
		}
	}
	return (wc);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i = 0, j, k, wc, len = 0, in_word = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wc = word_count(str);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; ++j)
	{
		if (str[j] == ' ')
			in_word = 0;
		else
		{
			if (in_word == 0)
			{
				while (((str[j + len] >= 'a' && str[j + len] <= 'z') ||
							(str[j + len] >= 'A' && str[j + len] <= 'Z')) &&
						str[j + len] != '\0')
					++len;
				words[i] = malloc(sizeof(char) * (len + 1));
				if (words[i] == NULL)
				{
					for (k = 0; k < i; ++k)
						free(words[k]);
					free(words);
					return (NULL);
				}
				for (k = 0; k < len; ++k)
					words[i][k] = str[j + k];
				words[i][len] = '\0';
				++i;
			}
			in_word = 1;
		}
	}
	words[wc] = NULL;
	return (words);
}
