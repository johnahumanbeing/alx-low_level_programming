#include "lists.h"

/**
 * add_nodeint- function that adds a new node at
 * the beginning of a listint_t list
 * @head:the double pointer to the list
 * @n:what is to be added in the new node
 *
 * Return:address of new element, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *brand_node = malloc(sizeof(listint_t));

	if (brand_node == NULL)
	{
		return (NULL);
	}
	brand_node->n = n;
	brand_node->next = *head;
	*head = brand_node;

	return (brand_node);
}
