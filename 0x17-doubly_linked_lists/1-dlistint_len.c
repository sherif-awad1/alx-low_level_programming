/*
 * File: 1-dlistint_len.c
 *
 * Author: Sherif awad
 */
#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer to the list
 * Return: number of element on list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
		h = h->next;
	return (len);
}
