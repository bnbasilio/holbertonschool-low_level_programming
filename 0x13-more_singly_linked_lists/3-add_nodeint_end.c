#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: pointed to beginning of the list
 *@n: data in the new node
 *
 *Return: pointer to beginning of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*Declarations*/
	listint_t *new_node, *last;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	last = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}

	return (*head);
}

