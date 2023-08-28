#include "lists.h"

/**
 * listint_len -function that returns the number of elements
 * in a linked listint_t list
 * @h:the head
 *
 * Return:number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		curr = curr->next;
		c++;
	}
	return (c);
}
