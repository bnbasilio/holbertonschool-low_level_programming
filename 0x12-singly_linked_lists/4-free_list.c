#include "lists.h"

/**
 *free_list - frees a list_t list
 *@head: beginning of the list
 */

void free_list(list_t *head)
{
	/* Declarations */
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}

	head = NULL;
}
