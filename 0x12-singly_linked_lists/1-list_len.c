#include "lists.h"
/**
 * list_len - unction that returns the number of elements
 * in a linked list_t list.
 * @h: the pointer to our lits
 *
 * Return: nothing
 */
size_t list_len(const list_t *h)
{
	const list_t *lst = h;
	size_t d = 0;

	while (lst != NULL)
	{
		lst = lst->next;
		d++;
	}

	return (d);
}
