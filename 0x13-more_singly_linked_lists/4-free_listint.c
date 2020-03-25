#include "lists.h"

/**
 *free_listint - frees a listint_t list
 *@head: pointer to beginning of the list
 */

void free_listint(listint_t *head)
{
	/*Declarations*/
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}

	head = NULL;
}

