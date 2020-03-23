#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_listint -  delete a listint_t list.
 *@head : head of linked list
 *Return: 0
 */

void free_listint(listint_t *head)
{
listint_t *asup;
while (head)
{
asup = head;
head = head->next;
free(asup);
}
}
