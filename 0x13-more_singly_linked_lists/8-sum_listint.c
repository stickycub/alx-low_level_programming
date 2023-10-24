#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n) of a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all data (n), or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
