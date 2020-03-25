#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: Pointer to head of listint
 * Return: node or null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *zab;

	if (!head)
		return (NULL);
	if (head == head->next)
		return (head);
	while (head)
	{
		zab = head;
		head = head->next;
		if (zab < head)
		return (head);
	}
	return (NULL);
}
