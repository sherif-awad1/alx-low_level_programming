#include "lists.h"

/**
 * free_list - free list_t
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	list_t *fre;

	while (head)
	{
		fre = head->next;
		free(head->str);
		free(head);
		head = fre;
	}
}
