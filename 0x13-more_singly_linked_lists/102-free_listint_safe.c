/*
 * File: free_listint_safe.c
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * listint_len - node length
 * @head: pointer to head
 * Return: the length
 */
size_t listint_leng(listint_t *head)
{
	listint_t *i, *j;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	i = head->next;
	j = (head->next)->next;
	while (j)
	{
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				node++;
				i = i->next;
				j = j->next;
			}
			i = i->next;
			while (i != j)
			{
				node++;
				i = i->next;
			}
			return (node);
		}
		i = i->next;
		j = (j->next)->next;
	}
	return (0);
}
/**
 * free_listint_safe - free listint_t safe
 * @h: pointer to address
 * Return: size of free
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t node, i;

	node = listint_leng(*h);
	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (i = 0; i < node; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (node);
}
