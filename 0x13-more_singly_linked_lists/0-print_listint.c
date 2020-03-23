#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 *print_listint - fun that print all the elements of list int
 *@h : head of list
 *Return: nbr of elements in list
 */
size_t print_listint(const listint_t *h)
{
int s = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
s++;
}
return (s);
}
