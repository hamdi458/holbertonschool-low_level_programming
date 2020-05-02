#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: var head
 * Return: returns the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (!head)
		return (0);
	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
