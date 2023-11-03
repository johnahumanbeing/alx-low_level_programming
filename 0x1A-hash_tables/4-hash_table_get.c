#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht:  the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: value associated with the element,
 *		or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const hash_node_t *curr_node;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	curr_node = ht->array[index];

	while (curr_node != NULL)  /* >>> ht['betty'] */
	{
		if (!strcmp(curr_node->key, key))
		{
			return (curr_node->value);
		}
		curr_node = curr_node->next;
	}
	return (NULL);
}
