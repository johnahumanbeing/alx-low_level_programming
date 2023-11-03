#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the sorted hash table
 *
 * Return: pointer to the sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash;
	unsigned long int j;

	shash = malloc(sizeof(shash_table_t));
	if (shash == NULL)
		return (NULL);
	shash->size = size;
	shash->array = malloc(sizeof(shash_node_t *) * size);
	if (shash->array == NULL)
	{
		free(shash);
		return (NULL);
	}
	for (j = 0; j < size; j++)
		shash->array[j] = NULL;
	shash->shead = NULL;
	shash->stail = NULL;
	return (shash);
}

/**
 * add_node_start_shash - adds a node at the beginning of a linked list
 * @h: a pointer to the head of the linked list
 * @key: the giving key
 * @value: the giving value
 *
 * Return: a pointer to the new node, else NULL
 */
shash_node_t *add_node_start_shash(shash_node_t **h, const char *key,
		const char *value)
{
	shash_node_t *curr_node;

	curr_node = *h;

	while (curr_node != NULL)
	{
		if (!strcmp(curr_node->key, key))
		{
			free(curr_node->value);
			curr_node->value = strdup(value);
			return (curr_node);
		}
		curr_node = curr_node->next;
	}
	/* adding a new node to the list */
	curr_node = malloc(sizeof(shash_node_t));
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
	curr_node->next = *h;
	*h = curr_node;
	return (curr_node);
}

/**
 * add_node_shash - adds a node to the sorted hash table
 * @ht: a pointer to the sorted hash table
 * @node: the new node to be added
 *
 * Return: nothing to return
 */
void add_node_shash(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *curr, *tmp2;
	int diff;

	curr = tmp2 = ht->shead;

	while (curr != NULL)
	{
		diff = strcmp(node->key, curr->key);
		if (diff == 0)
			return;
		else if (diff < 0)
		{
			node->sprev = curr->sprev;
			if (curr->sprev)
				curr->sprev->snext = node;
			else
				ht->shead = node;
			curr->sprev = node;
			node->snext = curr;
			return;
		}
		tmp2 = curr;
		curr = curr->snext;
	}
	node->sprev = tmp2;
	node->snext = NULL;

	if (ht->shead != NULL)
		tmp2->snext = node;
	else
		ht->shead = node;
	ht->stail = node;
}

/**
 * shash_table_set - adds or updates a node to sorted hash table
 * @ht: the shash table you want to add or update the key/value to
 * @key: the key
 * @value: the associated value with the key
 *
 * Return: 1 on success else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new = add_node_start_shash(&(ht->array[index]), key, value);
	if (new == NULL)
	{
		return (0);
	}

	add_node_shash(ht, new);
	return (1);
}

/**
 * shash_table_get - retrieves a value associeted to a giving key
 * @ht: the shash table you want to look into
 * @key: the key you are looking for
 *
 * Return: value associated with the element,
 *		or NULL if key couldn’t be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *curr_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	curr_node = ht->array[index];

	while (curr_node != NULL)
	{
		if (!strcmp(curr_node->key, key))
			return (curr_node->value);
		curr_node = curr_node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the keys/values of a sorted hash table
 * @ht: a pointer to the head of the hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr_node;
	char *separator = "";

	if (ht == NULL)
		return;
	printf("{");

	curr_node = ht->shead;
	while (curr_node != NULL)
	{
		printf("%s'%s': '%s'", separator, curr_node->key, curr_node->value);
		separator = ", ";
		curr_node = curr_node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the keys/values of a sorted hash table in rev
 * @ht: the shash table
 *
 * Return: nothing to return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr_node;
	char *separator = "";

	if (ht == NULL)
		return;
	printf("{");
	curr_node = ht->stail;
	while (curr_node != NULL)
	{
		printf("%s'%s': '%s'", separator, curr_node->key, curr_node->value);
		separator = ", ";
		curr_node = curr_node->sprev;
	}
	 printf("}\n");  /* >>> print(ht) */
}

/**
 * shash_table_delete - deletes a shash table
 * @ht: the hash table
 *
 * Return: nothing to return
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr, *nxt;
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
