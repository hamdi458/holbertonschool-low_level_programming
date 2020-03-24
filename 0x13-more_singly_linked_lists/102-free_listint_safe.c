#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_listint_safe -  delete a listint_t list.
 *@h : head of linked list
 *Return: 0
 */

size_t free_listint_safe(listint_t **h)
{
int s = 0;
listint_t *asup;
asup = *h;
while (*h)
{
*h = (*(h))->next;
free(asup);
s++;
asup = *h;
}
*h = NULL;
return (s);
}
