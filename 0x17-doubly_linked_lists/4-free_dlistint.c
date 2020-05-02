#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list.
 * @head: var head.
 * Return: Always 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
