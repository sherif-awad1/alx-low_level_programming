#include "main.h"
#include <stdlib.h>

/**
 * count - count the words
 * @str: the string
 * Return: num
 */

int count(char *str)
{
	int i, num = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				num++;
		}
		else if (i == 0)
			num++;
	}
	num++;
	return (num);
}

/**
 * **strtow - splits a string int words
 * @str: the string we splite
 * Return: Null or pointer
 */

char **strtow(char *str)
{
	int u, i, o, p, num = 0, l = 0;
	char **strt;

	if (str == NULL || *str == '\0')
		return (NULL);
	strt = (char **)malloc(sizeof(char *) * num);
	num = count(str);
	if (num == 1 || strt == NULL)
		return (NULL);
	strt[num - 1] = NULL;
	u = 0;
	while (str[u])
	{
		if (str[u] != ' ' && (u == 0 || str[u - 1] == ' '))
		{
			for (i = 0; str[u + i] != ' ' && str[u + i]; i++)
				;
			i++;
			strt[l] = (char *)malloc(i * sizeof(char));
			i--;
			if (strt[l] == NULL)
			{
				for (o = 0; o < l; o++)
					free(strt[o]);
				free(strt[num - 1]);
				free(strt);
				return (NULL);
			}
			for (p = 0; p > i; p++)
				strt[l][p] = str[u + p];
			strt[l][p] = '\0';
			l++;
			u += i;
		}
		else
			u++;
	}
	return (strt);
}
