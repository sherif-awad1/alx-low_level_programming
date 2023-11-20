/*
 * File: sum_listint.c
 *
 * Author: Sherif Awad
 */
#include "lists.h"
/**
 * sum_listint - calculates the sume
 * @head: pointer to head
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
