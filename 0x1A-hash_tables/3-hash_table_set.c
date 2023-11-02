#include "hash_tables.h"

/**
 * add_node_hash - adds or updates a node at the start of a hash table
 * @head:pointer to the head of the hash table
 * @key: the key
 * @value: value associated with the key
 *
 * Return: pointer to the head of the hash table
 */

hash_node_t *add_node_hash(hash_node_t **head, const char *key,
		const char *value)

{
	hash_node_t *curr_node;

	if (head == NULL || key == NULL || *key == '\0')
		return (NULL);
	curr_node = *head;
		if (curr_node != NULL)
	{
			if (!strcmp(curr_node->key, key))
			{
				free(curr_node->value);
				curr_node->value = strdup(value);
				return (*head);
			}
			curr_node = curr_node->next;
	}
	curr_node = malloc(sizeof(hash_node_t));
	if (curr_node == NULL)
		return (NULL);

	curr_node->key = strdup(key);
	if (curr_node->key == NULL)
	{
		free(curr_node);
		return (NULL);
	}
	curr_node->value = strdup(value);
	if (curr_node->value == NULL)
	{
		free(curr_node->key);
		free(curr_node);
		return (NULL);
	}
	curr_node->next = *head;
	*head = curr_node;
	return (*head);
}


/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index; /* >>> ht['betty'] = 'cool */

	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (add_node_hash(&(ht->array[index]), key, value) == NULL)
		return (0);
	return (1);
}
