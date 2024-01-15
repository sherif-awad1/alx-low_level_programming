#include "main.h"
/**
 * _memcpy - copy memory
 *@dest: desnation str
 *@src: source str
 *@n: number of byte
 * Return: 0 on success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	dest[a] = src[a];
	}
	return (dest);
}
