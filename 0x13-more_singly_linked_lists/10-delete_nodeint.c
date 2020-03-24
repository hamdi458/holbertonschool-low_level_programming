#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert a node in a list at given index
 * @head: pointer to the pointer to list
 * @idx: index to insert node at
 * @n: data to be inserted
 * Return: node or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  listint_t *old,*pld;
  unsigned int i = 1;
  old = *head;
  pld = old->next;
  if (head == NULL)
    return (-1);
  if (index == 0)
    {
      *head = (*(head))->next;
      free(old);
      return(1);
    }
  for (i = 1;old; i++)
    {
      if (i == index)
	{
	  old->next = pld->next;
	  free(pld);
	  return (1);
	}
      old = pld;
      pld = pld->next;
    }
    
  return (-1);
}
