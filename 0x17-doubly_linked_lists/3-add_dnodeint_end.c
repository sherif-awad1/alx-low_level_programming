/*
 * File: 3-add_dnodeint_end.c
 *
 * Author: Sherif awad
 */
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end list
 * @head: pointer to first node
 * @n: element value to add
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp_head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	tmp_head = *head;
	while (tmp_head->next)
		tmp_head = tmp_head->next;
	tmp_head->next = new_node;
	new_node->prev = tmp_head;
	return (new_node);
}
