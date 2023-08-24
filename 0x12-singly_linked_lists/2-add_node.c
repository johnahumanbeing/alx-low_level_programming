#include "lists.h"

/**
 * add_node - function that adds a new node at
 * the beginning of a list_t list.
 * @head:pointer to head of the list
 * @str:the string to duplicate
 *
 * Return:the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *brandy_node;

	brandy_node = malloc(sizeof(list_t));

	if (brandy_node == NULL)
	{
		return (NULL);
	}

	brandy_node->str = strdup(str);

	if (brandy_node->str == NULL)
	{
		free(brandy_node);
		return (NULL);
	}

	brandy_node->len = strlen(str);
	brandy_node->next = *head;
	*head = brandy_node;

	return (brandy_node);
}
