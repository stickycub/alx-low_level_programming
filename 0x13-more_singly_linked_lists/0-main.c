#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point to test the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
	new->n = 9;
	new->next = head;
	head = new;
	n = print_listint(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
}
