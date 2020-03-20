#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - sum of nbr elements in linked list
 * @h: A head of list_t list
 * Return: returns the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
int s = 0;
while (h)
{
h = h->next;
s++;
}
return (s);
}
