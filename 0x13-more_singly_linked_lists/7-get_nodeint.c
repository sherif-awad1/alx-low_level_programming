/*
 * File: get_nodeint.c
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: pointer to head
 * @index: the index
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
