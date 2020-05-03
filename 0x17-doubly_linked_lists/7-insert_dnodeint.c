#include "lists.h"
/**
 * insert_dnodeint_at_index -  that inserts a new node at a given position.
 * @h:var headr
 * @idx: var int
 * @n: var int
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nouveau = NULL;
	dlistint_t *node = NULL;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	node = *h;
	while (node != NULL && node->next != NULL)
	{
		idx--;
		node = node->next;
	}
	if (idx)
		return (NULL);
	nouveau = malloc(sizeof(*nouveau));
	if (!nouveau)
		return (NULL);
	nouveau->n = n;
	nouveau->prev = node;
	nouveau->next = node->next;
	if (node->next)
		node->next->prev = nouveau;
	node->next = nouveau;
	return (nouveau);
}
