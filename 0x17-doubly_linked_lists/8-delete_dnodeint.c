#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: var head
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, s = 0;
	dlistint_t *der = *head, *node = *head;

	if (*head == NULL)
		return (-1);
	while (node->next)
	{
		node = node->next;
		s++;
	}
	if (index > s)
		return (-1);
	if (index == 0)
	{
		*head = der->next;
		if (der->next != NULL)
			der->next->prev = NULL;
		free(der);
		return (1);
	}
	while (i != index)
	{
		if (der->next == NULL)
			return (-1);
		der = der->next;
		i++;
	}
	der->prev->next = der->next;
	if (der->next)
		der->next->prev = der->prev;
	free(der);
	return (0);
}
