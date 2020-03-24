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
if (*head == NULL)
return (-1);
if (index == 0)
{
pld = *head;
*head = (*(head))->next;
free(pld);
return (1);
}
old = *head;
pld = (*(head))->next;
while (pld)
{
if (i == index)
{
old->next = pld->next;
free(pld);
return (1);
}
old = pld;
pld = pld->next;
i++;
}
return (-1);
}
