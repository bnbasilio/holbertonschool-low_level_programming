#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of a doubly linked list
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: new node's data
 *
 * Return: address of new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i;

	temp = *h;
	if (!h)
		return (NULL);
	if (!h && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		if (*h)
			temp->prev = new_node;
		*h = new_node;
		new_node->prev = NULL;
		new_node->next = temp;
		return (new_node);
	}
	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
		if (!temp)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
