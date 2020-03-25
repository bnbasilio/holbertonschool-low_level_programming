#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t list
 *@head: pointer to beginning of the list
 *@index: index of the node, starting at 0
 *
 *Return: nth node of the listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*Declarations*/
	listint_t *current;
	unsigned int i;

	current = head;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}

