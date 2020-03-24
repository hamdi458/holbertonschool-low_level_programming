#include "lists.h"
/**
 * delete_nodeint_at_index - function to insert a node in a list at given index
 * @head: pointer to the pointer to list
 * @index: index to insert node at
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *old, *pld;
unsigned int i = 1;
old = *head;
if (head == NULL)
return (-1);
if (index == 0)
{
*head = (*(head))->next;
free(old);
return (1);
}
for (i = 1; old->next && i < index; i++)
{
pld = old;
old = old->next;
}
if (i < index)
return (-1);
pld->next = old->next;
free(old);
return (1);
}
