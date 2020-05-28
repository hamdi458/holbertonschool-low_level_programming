#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;

	head = malloc(sizeof(hash_table_t));
	if (!head)
		return (NULL);
	head->array = malloc(sizeof(hash_node_t) * size);
	if (!head->array)
		return (NULL);
	head->size = size;
	return (head);
}
