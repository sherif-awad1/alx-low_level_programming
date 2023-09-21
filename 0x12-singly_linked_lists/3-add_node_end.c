#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node to the end
 * @head: a pointer to head
 * @str: string
 * Return: null or address of the new elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *ptr;
	int leng;
	list_t *new, *last;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	ptr = strdup(str);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (leng = 0; str[leng];)
		leng++;

	new->str = ptr;
	new->len = leng;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}

