/*
 * File: free_listint2
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
