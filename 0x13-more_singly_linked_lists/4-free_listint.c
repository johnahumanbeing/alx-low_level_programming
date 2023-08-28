#include "lists.h"

/**
 * free_listint- function that frees a listint_t list
 * @head:the pointer to the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *curr = head;

	while (curr != NULL)
	{
		listint_t *temp_var = curr;
	/* using an iterative function */
		curr = curr->next;
		free(temp_var);
	}
}
