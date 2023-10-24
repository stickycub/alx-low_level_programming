#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	while (*h)
	{
		count++;
		temp = *h;
		if (temp <= temp->next)
		{
			*h = NULL;
			exit(98);
		}
		*h = (*h)->next;
		free(temp);
	}

	*h = NULL;
	return (count);
}
