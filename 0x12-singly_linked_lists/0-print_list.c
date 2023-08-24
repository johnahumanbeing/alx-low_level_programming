#include "lists.h"
/**
 * print_list -function that prints all the elements of a list_t list.
 * @h:the pointer to our lists
 *
 * Return:the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *task = h;
	size_t singly = 0;

	while (task != NULL)
	{
		if (task->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", task->len, task->str);

		task = task->next;
		singly++;
	}

	return (singly);
}
