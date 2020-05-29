#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: is the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
