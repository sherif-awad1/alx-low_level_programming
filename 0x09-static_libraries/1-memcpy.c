#include "main.h"

/**
 * *_memcpy - copies memory are
 * @dest: destnation pointer we copy memory to
 * @src: sorce pointer we copy from
 * @n: number of bytes from memory
 * Return: dest we copy to
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int tmp = 0;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		tmp = dest[i];
		dest[i] = src[i];
		src[i] = tmp;
	}
	return (dest);
}
