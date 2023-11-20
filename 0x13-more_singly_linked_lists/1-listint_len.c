/*
 * File: listint_len.c
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * listint_len - count number of elements
 * @h: pointer to head
 * Return: count of elementes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
