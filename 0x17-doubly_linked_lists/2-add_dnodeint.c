#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a dlistint_t list
 * @head: pointer to the first node
 * @n: giving number
 *
 * Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *brand_node = malloc(sizeof(dlistint_t));

	if (!brand_node)
	{
		return (NULL);
	}

	brand_node->n = n;
	brand_node->prev = NULL;
	brand_node->next = *head;

	if (*head)
	{
		(*head)->prev = brand_node;
	}

	*head = brand_node;
	return (brand_node);
}
