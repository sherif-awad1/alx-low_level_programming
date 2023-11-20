/*
 * File: pop_listint.c
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * pop_listint - delete the head
 * @head: pointer to head
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int h;

	if (*head == NULL)
		return (0);
	temp = *head;
	h = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (h);
}
