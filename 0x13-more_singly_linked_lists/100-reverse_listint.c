/*
 * File: reverse_listint.c
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * reverse_listint - reverses the list
 * @head: pointer to head
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h, *e;

	if (head == NULL || *head == NULL)
		return (NULL);

	e = NULL;

	while ((*head)->next != NULL)
	{
		h = (*head)->next;
		(*head)->next = e;
		e = *head;
		*head = h;
	}
	(*head)->next = e;

	return (*head);
}
