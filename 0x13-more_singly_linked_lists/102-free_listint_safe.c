#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 *free_listint_safe - fun that free
 *@h : pointer of list
 *Return: nbr of elements in list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t s = 0;
	listint_t *asup;

	while (*h)
	{
		asup = *h;
		if ((void *)(*(h))->next >= (void *)h)
		{
			free(asup);
			s++;
			*h = NULL;
			break;
		}
		*h = (*(h))->next;
		free(asup);
		asup = *h;
		s++;
	}
	return (s);
}
