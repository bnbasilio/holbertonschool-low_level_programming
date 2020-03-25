#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to beginning of the list
 *@idx: index of the list where the new node should be added, starting at 0
 *@n: data (n) of the new node
 *
 *Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*Declarations*/
	listint_t *current, *new_node;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	current = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (current != NULL)
			current = current->next;
		else
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = current->next;
		current->next = new_node;
	}

	return (new_node);
}

