#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index index of a dlistint_t
 *							  linked list
 * @head: pointer to head of a doubly linked list
 * @index: index of the node the should be deleted, starting at 0
 *
 * Return: 1 if successful, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = *head;
	if (!head || !(*head))
		return (-1);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}

	if (index == 0)
	{
		if (temp->next)
			temp->next->prev = NULL;
		*head = temp->next;
	}
	else
	{
		if (temp->next)
			temp->next->prev = temp->prev;
		if (temp->prev)
			temp->prev->next = temp->next;
	}

	free(temp);
	return (1);
}
