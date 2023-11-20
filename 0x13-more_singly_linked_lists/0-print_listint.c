/*
 * File: print_listint
 *
 * Author: Sherif Awad
 */

#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print listint_t
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
