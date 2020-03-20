#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list
 *@h: pointer to list
 *
 *Return: number of elements in list_t list
 */

size_t list_len(const list_t *h)
{
	/* Declarations */
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
