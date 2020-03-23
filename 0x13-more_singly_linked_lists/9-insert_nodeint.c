#include "lists.h"
/**
 *insert_nodeint_at_index - function that inserts a new node at a given position
 *@head : pointer to list
 *@idx : index of node
 *@n : data(n) of node 
 *Return: node or null
 */
listint_t *insert_nodeint_at_index(listint_t *head, unsigned int idx, int n)
{
unsigned int i;
listint_t *nouveau = malloc(sizeof(*nouveau)), *suivant;
 if (nouveau == NULL)
   return (NULL);
 nouveau->n = n;
 nouveau->next = NULL;
for (i = 0; i < idx - 1; i++)
head = head->next;
 suivant = head;
 head = nouveau;
 nouveau->next = suivant;
  return (nouveau);
}
