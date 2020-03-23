#include "lists.h"

/**
 * free_listint2 - delete a listint_t list
 * @head: pointer to the pointer of the head list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
listint_t *asup;
if (head == NULL || *head == NULL)
return;
while (*head != NULL)
{
asup = *head;
*head = (*(head))->next;
free(asup);
}
*head = NULL;
}
