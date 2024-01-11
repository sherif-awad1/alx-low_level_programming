/*
 * File: 8-delete_dnodeint.c
 *
 * Author: Sherif awad
 */
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that delete the node index linked list
 * @head: pointer to head
 * @index: the index we should delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_tmp = NULL;
	unsigned int lob = 0;

	if (*head && head)
	{
		head_tmp = *head;
		if (index == 0)
		{
			(*head) = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(head_tmp);
			return (0);
		}
		while (head_tmp != NULL)
		{
			if (lob == index)
			{
				if (head_tmp->prev)
					head_tmp->prev->next = head_tmp->next;
				if (head_tmp->next)
					head_tmp->next->prev = head_tmp->prev;
				free(head_tmp);
				return (0);
			}
			head_tmp = head_tmp->next;
			lob++;
		}
	}
	return (-1);
}
