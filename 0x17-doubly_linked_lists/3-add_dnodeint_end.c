#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of a doubly linked list
 * n: new node's data
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	last = *head;
	if (*head == NULL)
	{
		(*head) = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		new_node->prev = (*head);
	}
	return (new_node);
}
