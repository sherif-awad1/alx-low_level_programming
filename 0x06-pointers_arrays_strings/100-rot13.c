#include "main.h"

/**
 * *rot13 - encode a sting using rot13
 * @s: pointer to encode
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;

	char alpha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
			}
		}
	}
	return (s);
}
