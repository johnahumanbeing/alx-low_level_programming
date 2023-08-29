#include "lists.h"

/**
 * sum_listint- returns sum of all the data of a listint_t list
 * @head: pointer to the list
 *
 * Return: if list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
