#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: Pointer to head of listint
 * Return: node or null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p = head, *t = head;

	while (p != NULL)
	{
		t = t->next;
		p = p->next->next;
		if (p == t)
		{
			t = head;
			while (t != p)
			{
				t = t->next;
				p = p->next;
			}
			return (t);
		}
	}
	return (NULL);
}
