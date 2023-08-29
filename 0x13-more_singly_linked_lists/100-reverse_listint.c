#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the list
 *
 * Return: apointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_nod = NULL;
	listint_t *curr = *head;
	listint_t *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev_nod;
		prev_nod = curr;
		curr = next;
	}

	*head = prev_nod;

	return (*head);
}
