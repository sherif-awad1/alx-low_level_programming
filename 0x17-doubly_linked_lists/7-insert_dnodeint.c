/*
 * File: 7-insert_dnodeint.c
 *
 * Author: Sherif awad
 */
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts new node at given position
 * @h: pointer to head
 * @idx: the index
 * @n: the element to add
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *new_tmp, *htmp = *h;
	unsigned int lob = 0, count = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (htmp != NULL)
	{
		htmp = htmp->next;
		count++;
	}
	if (idx == count)
		return (add_dnodeint_end(h, n));
	if (idx > count)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_tmp = *h;
	new_node->n = n;
	while (lob < idx - 1)
	{
		new_tmp = new_tmp->next;
		lob++;
	}
	new_node->prev = new_tmp;
	new_node->next = new_tmp->next;
	new_tmp->next = new_node;
	new_node->next->prev = new_node;
	return (new_node);
}
