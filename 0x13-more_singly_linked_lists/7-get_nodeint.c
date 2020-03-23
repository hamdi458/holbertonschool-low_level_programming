#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth node of
 *a listint_t linked list.
 *@head : pointer to list
 *@index : index of element
 *Return: node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; i < index && head != NULL; i++)
head = head->next;
if (head)
return (head);
return (NULL);
}
