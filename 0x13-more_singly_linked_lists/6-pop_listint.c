#include "lists.h"

/**
 * pop_listint- deletes the head of the listint_t linked list
 * @head: the pointer to the list
 *
 * Return: if linked list is empty,return 0,else the head nodes data
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *temp_var = *head;

	if (*head == NULL)
	{
		return (0);
	}
	d = (*head)->n;
	*head = (*head)->next;
	free(temp_var);

	return (d);
}
