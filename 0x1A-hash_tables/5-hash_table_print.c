#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: nothing to return
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *curr_node;
	char *separotor = "";
	/* used to separate the printed key value pairs within the hash table */

	if (ht == NULL)
		return;

	printf("{");
	if (ht != NULL)
	{
		for (j = 0; j < ht->size; j++)
		{
			curr_node = ht->array[j];
			while (curr_node != NULL)
			{
				printf("%s'%s': '%s'", separotor, curr_node->key, curr_node->value);
				separotor = ", ";
				curr_node = curr_node->next;
			}
		}
	}
	printf("}\n");  /* >>> print(ht) */
}
