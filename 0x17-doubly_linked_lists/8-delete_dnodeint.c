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
	dlistint_t *head_tmp = *head, *tmp;
	unsigned int lob = 0;

	if (head_tmp != NULL)
		while (head_tmp->prev != NULL)
			head_tmp = head_tmp->prev;
	while (head_tmp != NULL)
	{
		if (lob == index)
		{
			if (lob == 0)
			{
				*head = head_tmp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				if (head_tmp->next != NULL)
					head_tmp->next->prev = tmp;
				tmp->next = head_tmp->next;
			}
			free(head_tmp);
			return (1);
		}
		tmp = head_tmp;
		head_tmp = head_tmp->next;
		lob++;
	}
	return (-1);
}
