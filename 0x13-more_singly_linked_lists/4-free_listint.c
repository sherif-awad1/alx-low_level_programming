/*
 * File: free_listint
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * free_listint - free listint_t
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
