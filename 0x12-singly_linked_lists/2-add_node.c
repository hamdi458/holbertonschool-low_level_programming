#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node -  adds a new node at the beginning of a list_t list.
 *@head : head of linked list
 *@str : str of node
 *Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
int s = 0;
list_t *nouveau = malloc(sizeof(*nouveau));
if (head == NULL || nouveau == NULL)
return (NULL);
if (!str)
{
nouveau->str = NULL;
nouveau->len = 0;
}
else
{
nouveau->str = strdup(str);
while (*str != '\0')
{
s++;
str++;
}
nouveau->len = s;
}
nouveau->next = *head;
*head = nouveau;
return (nouveau);

}
