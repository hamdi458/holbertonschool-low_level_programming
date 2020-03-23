#include "lists.h"
/**
 * pop_listint - function that deletes the head node of
 *a listint_t linked list, and returns the head nodes data (n).
 * @head: pointer to the pointer of listint_t
 * Return: value of n in the head node
 */
int pop_listint(listint_t **head)
{
listint_t *now;
int n;
now = *head;
if (now != NULL)
{
n = now->n;
*head = now->next;
free(now);
return (n);
}
return (0);
}
