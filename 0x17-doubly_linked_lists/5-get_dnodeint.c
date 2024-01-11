/*
 * File: 5-get_dnodeint.c
 *
 * Author: Sherif awad
 */
#include "lists.h"
/**
 * get_dnodeint_at_index -  function that returns the nth node of linked list
 * @head: pointer to first node
 * @index: index of the node
 * Return: if the node does not exist, return NULl else return the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *head_tmp;
	unsigned int lob;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	head_tmp = head;
	for (lob = 1; head_tmp->next; lob++)
	{
		head_tmp = head_tmp->next;
		if (lob == index)
			return (head_tmp);
	}
	return (NULL);
}
