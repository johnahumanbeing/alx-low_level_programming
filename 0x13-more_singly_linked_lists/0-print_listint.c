#include "lists.h"

/**
 * print_listint- function that prints all the elements of a listint_t list
 * @h:pointer to the given list
 *
 * Return:the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		nodes++;
	}
	return (nodes);
}
