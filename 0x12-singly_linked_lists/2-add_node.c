#include "lists.h"
#include <string.h>

/**
 * add_node - add new node
 * @head: pointer to head
 * @str: the string
 * Return: null or address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *ptr;
	int leng;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	ptr = strdup(str);

	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}

	for (leng = 0; str[leng];)
		leng++;

	new->str = ptr;
	new->len = leng;
	new->next = *head;

	*head = new;

	return (new);
}
