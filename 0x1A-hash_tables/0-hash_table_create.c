#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht_table;
	unsigned long int j;

	if (size == 0)
	{
		return (NULL);
	}

	ht_table = malloc(sizeof(hash_table_t));

	if (ht_table == NULL)
	{
		return (NULL);
	}

	ht_table->size = size;

	ht_table->array = malloc(size * sizeof(hash_node_t *));

	if (ht_table->array == NULL)
	{
		free(ht_table);
		return (NULL);
	}

	for (j = 0; j < size; j++)
		ht_table->array[j] = NULL;

	return (ht_table);
}
