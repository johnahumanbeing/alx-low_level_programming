#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to the list
 * @index: index of the node to be deleted, where index starts at 0
 *
 * Return: 1 if it succeeds, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev_nod;

	unsigned int list;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}

	prev_nod = *head;
	curr = (*head)->next;

	for (list = 1; curr != NULL && list < index; list++)
	{
		prev_nod = curr;
		curr = curr->next;
	}
	if (curr == NULL)
	{
		return (-1);
	}

	prev_nod->next = curr->next;
	free(curr);

	return (1);
}
