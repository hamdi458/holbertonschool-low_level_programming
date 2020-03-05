#include "holberton.h"
#include <stdlib.h>


/**
 **_calloc -   fun
 *@nmemb: var
 *@size: var
 *Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;

char *ar;

if (nmemb == 0 || size == 0)
return (NULL);

ar = malloc(nmemb * size);

if (ar == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
ar[i] = '\0';

return (ar);
}
