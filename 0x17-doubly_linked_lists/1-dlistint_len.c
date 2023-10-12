#include "lists.h"

/**
 * dlistint_len - returns number of elements in a dlisint_t list
 * @h: pointer to first node
 *
 * Return: length of the list
 *
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t list_len = 0;

	while (current)
	{
		current = current->next;
		list_len++;
	}
	return (list_len);
}
