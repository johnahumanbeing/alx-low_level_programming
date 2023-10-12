#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 * @head: pointer to the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 on success else -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int j = 0;

	if (!*head)
		return (-1);

	current = *head;

	while (current && j < index)
	{
		current = current->next;
		j++;
	}

	if (!current)
		return (-1);

	if (current == *head)
		*head = current->next;

	if (current->prev)
		current->prev->next = current->next;

	if (current->next)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
