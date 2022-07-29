/*
 * File: 0-hash_table_create.c
 * Auth: TEWOLDE
 */

#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned long int t;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->size = size;
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
		return (NULL);
	for (t = 0; t < size; t++)
		htable->array[t] = NULL;

	return (htable);

}
