#include "lists.h"
/**
 * free_list -function that frees a list_t list.
 * @head: the head of the linked list
 *
 * Return:nothing
 */
void free_list(list_t *head)
{
	list_t *present = head;
	list_t *next;

	while (present != NULL)
	{
		next = present->next;
		free(present);
		present = next;
	}
}
