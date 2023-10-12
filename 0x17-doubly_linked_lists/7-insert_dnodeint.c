#include "lists.h"

/**
 * insert_dnodeint_at_index- inserts a new node at a given position
 * @h: pointer to the head of list
 * @idx: index of the list where new node should be added
 * @n: giving number
 *
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *brand_node, *current = *h;
	unsigned int j = 0;

	if (current == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (j < idx - 1 && current != NULL)
	{
		j++;
		current = current->next;
	}

	if (j == idx - 1 && current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (j == idx - 1 && current->next != NULL)
	{
		brand_node = malloc(sizeof(dlistint_t *));

		if (brand_node == NULL)
			return (NULL);
		brand_node->n = n;
		(current->next)->prev = brand_node;
		brand_node->next = current->next;
		current->next = brand_node;
		brand_node->prev = current;

		return (brand_node);
	}
	return (NULL);

}
