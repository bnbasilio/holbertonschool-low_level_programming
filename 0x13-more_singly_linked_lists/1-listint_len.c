#include "lists.h"

/**
 *listint_len - returns the number of elements in a listint_t list
 *@h: beginning of the list
 *Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	/*Declarations*/
	size_t node_count;

	node_count = 0;
	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}

