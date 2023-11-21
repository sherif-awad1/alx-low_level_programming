/*
 * File: print_listint.c
 *
 * Author: Sherif Awad
 */
#include "lists.h"
#include <stdio.h>
/**
 * listint_len - get the leng
 * @head: pointer to head
 * Return: number of node
 */
size_t listint_len(const listint_t *head)
{
	const listint_t *i, *j;
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
 * print_listint_safe - print list safe
 * @head: pointer to head
 * Return: number of node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	node = listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
