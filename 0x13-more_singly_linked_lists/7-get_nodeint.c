#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t list
 * @head:pointer to the list
 * @index: the index of the node starting at 0
 *
 * Return: nothing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		if (c == index)
		{
			return (curr);
		}
		c++;
		curr = curr->next;
	}
	return (NULL);
}
