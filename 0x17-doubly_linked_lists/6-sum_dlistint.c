#include "lists.h"

/**
 * sum_dlistint- returns the sum of all the data (n) of a likned list
 * @head: poiter to the list
 *
 * Return: if the list is empty, return 0
*/
int sum_dlistint(dlistint_t *head)
{
	int res = 0;
	dlistint_t *current = head;

	while (current)
	{
		res += current->n;
		current = current->next;
	}
	return (res);
}
