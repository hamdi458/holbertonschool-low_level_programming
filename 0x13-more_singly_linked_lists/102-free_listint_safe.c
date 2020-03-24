#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 *print_listint_safe - fun that print all the elements of list int
 *@head : pointer of list
 *Return: nbr of elements in list
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *zeb;
int s = 0;
while (*h)
{
zeb = *h;
*h = (*(h))->next;
free(zeb);
s++;
if ((void *)h > (void *)zeb)
{
free(zeb);
s++;
break;
}
    }
  
  return (s);
}
