#include "lists.h"

/**
 *sum_listint - sums all the data (n) of a listint_t linked list
 *@head: pointer to beginning of the list
 *Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	/*Declarations*/
	listint_t *current;
	int i, sum;

	if (head == NULL)
		return (0);

	sum = 0;
	current = head;

	for (i = 0; current != NULL; i++)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

