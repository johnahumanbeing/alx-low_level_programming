#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the list
 * @index: the index of the node, starting from 0
 *
 * Return: if the node doesn't exist, return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int j = 0;

	while (current && j < index)
	{
		current = current->next;
		j++;
	}

	if (j == index)
	{
		return (current);
	}
	return (NULL);
}
