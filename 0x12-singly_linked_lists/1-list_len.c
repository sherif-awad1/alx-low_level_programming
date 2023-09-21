#include "lists.h"

/**
 * list_len - count the linked list
 * @h: linked lisr
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t leng = 0;

	while (h)
	{
		leng++;
		h = h->next;
	}

	return (leng);
}
