/*
 * File: delete_nodeint.c
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: pointer to head
 * @index: the node we want to delete
 * Return: 1 on sccess
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int nodes;

	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (nodes = 0; nodes < (index - 1); nodes++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
