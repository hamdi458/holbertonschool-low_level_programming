#include "lists.h"
/**
 * dlistint_len -  number of elements in a linked dlistint_t list.
 * @h: head
 * Return:  returns the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int s = 0;

	if (!h)
		return (0);
	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
