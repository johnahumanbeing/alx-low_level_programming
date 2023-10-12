#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h : pointer to first node
 *
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_nbr = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_nbr++;
	}
	return (node_nbr);
}
