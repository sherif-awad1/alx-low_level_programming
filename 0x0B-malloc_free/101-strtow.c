#include "main.h"
#include <stdlib.h>

/**
 * count - count the words
 * @str: the string
 *
 * Return: num
 */

int count(char *str)
{
	int i, f = 0, num = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			num++;
		}
	}
	return (num);
}

/**
 * **strtow - splits a string int words
 * @str: the string we splite
 * Return: Null or pointer
 */

char **strtow(char *str)
{
	int i, o = 0, leng = 0, num, p = 0, rt, nd;
	char **strt, *st;

	while (*(str + leng))
		leng++;
	num = count(str);
	if (num == 0)
		return (NULL);

	strt = (char **)malloc(sizeof(char *) * (num + 1));

	if (strt == NULL)
		return (NULL);

	for (i = 0; i <= leng; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (p)
			{
				nd = i;
				st = (char *)malloc((p + 1) * sizeof(char));
				if (st == NULL)
					return (NULL);
				while (rt < nd)
					*st++ = str[rt++];
				*str = '\0';
				strt[o] = st - p;
				o++;
				p = 0;
			}
		}
		else if (p++ == 0)
			rt = i;
	}
	strt[o] = NULL;

	return (strt);
}
