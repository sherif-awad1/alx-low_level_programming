/*
 * File: 4-free_dlistint.c
 *
 * Author: Sherif awad
 */
#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
