#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_list -  delete a list_t list.
 *@head : head of linked list
 *Return: 0
 */

void free_list(list_t *head)
{
list_t *asup;
while (head)
{
asup = head;
free(head->str);
head = head->next;
free(asup);
}
}
