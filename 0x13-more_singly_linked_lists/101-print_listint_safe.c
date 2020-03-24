#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 *print_listint_safe - fun that print all the elements of list int
 *@head : pointer of list
 *Return: nbr of elements in list
 */
size_t print_listint_safe(const listint_t *head)
{
const  listint_t *zeb;
int s = 0;
while (head)
{
printf("[%p] %d\n", (void *)head, head->n);
zeb = head;
head = head->next;
s++;
if ((void *)head > (void *)zeb)
{
printf("-> [%p] %d\n", (void *)head, head->n);
break;
}
}
return (s);
}
