#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list. If it fails, exit with status 98.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;
	size_t i;

	if (head == NULL)
		exit(98);

	current = head;
	for (i = 0; current != NULL; i++)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
		if (i > 98)
		{
			printf("-> [98] %d\n", current->n);
			exit(98);
		}
	}

	return (count);
}
