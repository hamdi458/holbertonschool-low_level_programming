#include "lists.h"
/**
 * pop_listint - function that deletes the head node of
 *a listint_t linked list, and returns the head nodes data (n).
 * @head: pointer to the pointer of listint_t
 * Return: value of n in the head node
 */
int pop_listint(listint_t **head)
{
int n;
if (*head != NULL)
{
n = (*(head))->n;
*head = (*(head))->next;
return (n);
}
return (0);
}
