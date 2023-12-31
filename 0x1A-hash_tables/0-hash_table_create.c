#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: is the size of the array.
 *
 * Return: ptr to new hash table, or NULL if function fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
