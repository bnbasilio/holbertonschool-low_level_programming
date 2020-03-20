#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: beginning of the list
 *@str: string to be added to the list as a new element
 *
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* Declarations */
	list_t *new_node, *last;
	int i;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	last = *head;

	for (i = 0; str[i]; i++)
		;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = new_node;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}

	return (new_node);
}
