#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 *listint_len - fun that returns the
 *number of elements in a linked listint_t list.
 *@h : head of list
 *Return: number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
int s = 0;
while (h)
{
h = h->next;
s++;
}
return (s);
}
