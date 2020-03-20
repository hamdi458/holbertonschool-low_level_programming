#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: the head of linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
int s = 0;
while (h != NULL)
{
s++;
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (s);
}
