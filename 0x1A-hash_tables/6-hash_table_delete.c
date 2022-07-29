/*
 * File: 6-hash_table_delete.c
 * Auth: Tewodle
*/

#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *del, *tmp;
	unsigned long int t;

	for (t = 0; t < ht->size; t++)
	{
		if (ht->array[t] != NULL)
		{
			del = ht->array[t];
			while (del != NULL)
			{
				tmp = del->next;
				free(del->key);
				free(del->value);
				free(del);
				del = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
