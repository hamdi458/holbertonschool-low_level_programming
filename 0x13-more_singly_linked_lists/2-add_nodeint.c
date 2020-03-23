#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint -  adds a new node at the beginning of a listint_t list.
 *@head : head of linked list
 *@n : var int of node
 *Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nouveau = malloc(sizeof(*nouveau));
if (head == NULL || nouveau == NULL)
return (NULL);
nouveau->n = n;
nouveau->next = *head;
*head = nouveau;
return (nouveau);

}
