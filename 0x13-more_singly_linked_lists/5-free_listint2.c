#include "lists.h"

/**
 * free_listint2- function that frees a listint_t list
 * @head: pointer to the list
 *
 * Return:nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	/* iterating the list while freeing memory */
	while (curr != NULL)
	{
		listint_t *temp_var = curr;

		curr = curr->next;
		free(temp_var);
		temp_var = NULL;
	}
	/* setting head to NULL */
	*head = (NULL);
}
