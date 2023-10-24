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

	if (h == NULL || *h == NULL)
		return (count);

	current = *h;
	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);

		if (count > 98)
		{
			exit(98);
		}
	}

	*h = NULL;
	return (count);
}
