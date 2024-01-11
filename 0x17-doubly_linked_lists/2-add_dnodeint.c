/*
 * File: 2-add_dnodeint.c
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of list
 * @head: ponter to first node
 * @n: the new element
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;
	return (new_node);
}
