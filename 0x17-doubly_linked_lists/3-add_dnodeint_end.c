#include "lists.h"

/**
 * add_dnodeint_end -adds new node at the end of the dlistint_t list
 * @head: pointer tho the list
 * @n: giving number
 *
 * Return:the address of the new element, or NULL if it failed
 *
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *brand_node, *last;

	brand_node = malloc(sizeof(dlistint_t));
	if (!brand_node)
		return (NULL);

	brand_node->n = n;
	brand_node->next = NULL;

	if (!*head)
	{
		brand_node->prev = NULL;
		*head = brand_node;
		return (brand_node);
	}

	last = *head;

	while (last->next)
		last = last->next;

	last->next = brand_node;
	brand_node->prev = last;

	return (brand_node);
}
