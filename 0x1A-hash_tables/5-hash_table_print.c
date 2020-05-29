#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	char  *tr = "";
	unsigned int i;
	hash_node_t *node;

	if (!ht)
		return;
	tr = "";
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{

			printf("%s", tr);
			printf("'%s': '%s'", node->key, node->value);
			tr = ", ";
			node = node->next;
		}
		i = i + 1;
	}
	printf("}\n");
}
