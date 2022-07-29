/*
 * File: 3-hash_table_set.c
 * Auth: Tewolde
*/

#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add;
	char *value_copy;
	unsigned long int index, t;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (t = index; ht->array[t]; t++)
	{
		if (strcmp(ht->array[t]->key, key) == 0)
		{
			free(ht->array[t]->value);
			ht->array[t]->value = value_copy;
			return (1);
		}
	}

	add = malloc(sizeof(hash_node_t));
	if (add == NULL)
	{
		free(value_copy);
		return (0);
	}
	add->key = strdup(key);
	if (add->key == NULL)
	{
		free(add);
		return (0);
	}
	add->value = value_copy;
	add->next = ht->array[index];
	ht->array[index] = add;

	return (1);
}
