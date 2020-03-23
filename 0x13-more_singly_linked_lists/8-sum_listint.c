#include "lists.h"
/**
 *sum_listint - function that returns the sum of all the data(n) of list
 *@head : pointer to list
 *Return: sum or 0
 */
int sum_listint(listint_t *head)
{
int s = 0;
unsigned int i;
if (head != NULL)
for (i = 0; head; i++)
{
s = s + head->n;
head = head->next;
}
return (s);
}
