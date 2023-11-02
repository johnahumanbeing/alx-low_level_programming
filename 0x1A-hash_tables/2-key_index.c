#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: index which the key/value should be storred in
 *  the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((key == NULL || size == 0) ? 0 : (hash_djb2(key) % size));
}
