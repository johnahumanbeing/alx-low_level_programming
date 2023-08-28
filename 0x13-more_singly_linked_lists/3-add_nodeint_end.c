#include "lists.h"

/**
 * add_nodeint_end- function that adds a new node at
 * the end of a listint_t list
 *
 * @head: the pointer to the new node
 * @n: what is added to the new node
 *
 * Return: address of new element, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *brand_node = malloc(sizeof(listint_t));

	if (brand_node == NULL)
	{
		return (NULL);
	}
	brand_node->n = n;
	brand_node->next = NULL;

	/* if head pointer is null,pointer points head to new node */
	if (*head == NULL)
	{
		*head = brand_node;
	}
	else
	{
		listint_t *curr = *head;

		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = brand_node;
	}
	return (brand_node);
}
