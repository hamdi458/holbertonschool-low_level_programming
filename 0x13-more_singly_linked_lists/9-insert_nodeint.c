#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert a node in a list at given index
 * @head: pointer to the pointer to list
 * @idx: index to insert node at
 * @n: data to be inserted
 * Return: node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nouveau, *old;
unsigned int i = 1;
old = *head;
nouveau = malloc(sizeof(nouveau));
if (nouveau == NULL || head == NULL)
return (NULL);
nouveau->n = n;
nouveau->next = NULL;
if (idx == 0)
{
nouveau->next = *head;
*head = nouveau;
return (nouveau);
}
for (i = 0; i < idx - 1 && old; i++)
old = old->next;
if (old == NULL && i == idx)
{
old->next = nouveau;
return (nouveau);
}
if (old == NULL)
return (NULL);
nouveau->next = old->next;
old->next = nouveau;
return (nouveau);
}
