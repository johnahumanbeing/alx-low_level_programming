#include "lists.h"

/**
 * _strlen - returns lenght of a string
 * @str: the string to check
 * Return: lenght
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}
/**
 * add_node_end -function that adds a new node at the end of a list_t list.
 * @str:the string to be duplicated
 * @head:the base address of the linked list
 *
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *brand_node, *prev_node;

	brand_node = malloc(sizeof(list_t));

	if (brand_node == NULL)
	{
		return (NULL);
	}

	brand_node->str = strdup(str);

	if (brand_node->str == NULL)
	{
		free(brand_node);
		return (NULL);
	}

	brand_node->len = _strlen(brand_node->str);
	brand_node->next = NULL;

	if (*head == NULL)
	{
		*head = brand_node;
	}
	else
	{
		prev_node = *head;
		while (prev_node->next != NULL)
		{
			prev_node = prev_node->next;
		}
		prev_node->next = brand_node;
	}
	return (brand_node);
}
