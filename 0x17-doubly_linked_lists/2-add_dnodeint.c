#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head
 * @n: var int
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nouveau = NULL;

	nouveau = malloc(sizeof(*nouveau));
	if (!nouveau)
		return (NULL);
	nouveau->n = n;
	nouveau->prev = NULL;
	nouveau->next = *head;
	if (*head)
		(*head)->prev = nouveau;
	*head = nouveau;
	return (nouveau);
}
