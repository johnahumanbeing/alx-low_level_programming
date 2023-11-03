#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: nothing to return
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *nxt;
	unsigned long int j;

	if (ht == NULL)
		return;

	for (j = 0; j < ht->size; j++)
	{
		curr = ht->array[j];
		while ((nxt = curr) != NULL)
		{
			curr = curr->next;
			free(nxt->key);
			free(nxt->value);
			free(nxt);
		}
	}
	free(ht->array);
	free(ht);
}
