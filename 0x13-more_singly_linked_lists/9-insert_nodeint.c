#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a nnew node at a given position
 * @head: pointer to the list
 * @idx: the index of the list where the new node should
 * be added, where index starts at 0
 *
 * @n: data of new element
 *
 * Return:address of the new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c = 0;

	listint_t *curr = *head;

	while (curr != NULL && c < idx - 1)
	{
		curr = curr->next;
		c++;
	}
	if (curr == NULL && c < idx - 1)
	{
		return (NULL);
	}
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = curr->next;
	curr->next = new;

	return (new);
}
