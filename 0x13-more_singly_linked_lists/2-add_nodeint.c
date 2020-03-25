#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a listint_t list
 *@head: pointed to beginning of the list
 *@n: data in the new node
 *
 *Return: pointer to beginning of the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*Declarations*/
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

