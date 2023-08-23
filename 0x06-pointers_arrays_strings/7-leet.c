#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: pointer to the array
 * Return: s
 */

char *leet(char *s)
{
	char ar[10] = "aAeEoOtTlL";
	char arj[10] = "4433007711";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == ar[j])
			{
				s[i] = arj[j];
			}
		}
	}
	return (s);
}

