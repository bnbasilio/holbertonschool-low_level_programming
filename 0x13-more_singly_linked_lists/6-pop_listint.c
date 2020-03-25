#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t and returns its data (n)
 *@head: pointer to beginning of the list
 *Return: head node's data (n), 0 otherwise
 */

int pop_listint(listint_t **head)
{
	/*Declarations*/
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	n = (*head)->n;

	temp = *head;
	*head = temp->next;
	free(temp);

	return (n);
}

