#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: var head
 * @n: var int.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nouveau;
	dlistint_t *der = NULL;

	nouveau = malloc(sizeof(dlistint_t));

	if (!nouveau)
		return (NULL);
	nouveau->n = n;
	nouveau->next = NULL;
	if (*head == NULL)
	{
		*head = nouveau;
		nouveau->prev = NULL;
		return (nouveau);
	}
	der = *head;
	while (der->next)
		der = der->next;
	der->next = nouveau;
	nouveau->prev = der;
	return (nouveau);
}
