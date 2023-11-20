/*
 * File: add_nodeint
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * add_nodeint - add node to head
 * @head: pointer to header
 * @n: intger to place in head
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
