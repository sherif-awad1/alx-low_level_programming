/*
 * File: 6-sum_dlistint.c
 *
 * Author: Sherif awad
 */
#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: pointer to first node
 * Return: sum of the list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *head_tmp = head;
	int sum = 0;

	while (head_tmp)
	{
		sum += head_tmp->n;
		head_tmp = head_tmp->next;
	}
	return (sum);
}
