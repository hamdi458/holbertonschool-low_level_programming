#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: pointer head of list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int s = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
