/*
 * File: 5-hash_table_print.c
 * Auth: Tewolde
*/

#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *add;
	unsigned long int t;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (t = 0; t < ht->size; t++)
	{
		if (ht->array[t] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			add = ht->array[t];
			while (add != NULL)
			{
				printf("'%s': '%s'", add->key, add->value);
				add = add->next;
				if (add != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
