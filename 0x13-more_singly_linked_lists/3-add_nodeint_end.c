/*
 * File: add_nodient_end
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * add_nodeint_end - add node at the tail
 * @head: pointer to the head
 * @n: integer to be add
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
