#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @l: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *l)
{
	int count;

	count = 0;

	if (l == NULL)
		return (count);

	while (l->prev != NULL)
		l = l->prev;

	while (l != NULL)
	{
		printf("%d\n", l->n);
		count++;
		l = l->next;
	}

	return (count);
}
