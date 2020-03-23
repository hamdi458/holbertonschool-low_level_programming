
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint_end -  adds a new node at the end of a list_t list.
 *@head : head of linked list
 *@n : int of node
 *Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nouveau = malloc(sizeof(*nouveau)), *suivant;
if (nouveau == NULL)
return (NULL);
nouveau->n = n;
nouveau->next = NULL;
if (*head == NULL)
{
*head = nouveau;
return (nouveau);
}
suivant = *head;
while (suivant->next != NULL)
suivant = suivant->next;
suivant->next = nouveau;
return (nouveau);
}
