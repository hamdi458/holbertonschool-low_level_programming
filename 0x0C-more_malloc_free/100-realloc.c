#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **_realloc - fun
 *@ptr : var
 *@old_size : var
 *@new_size : var
 *Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size > old_size)
{
free(ptr);
ptr = malloc(new_size);
}
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
ptr = malloc(new_size);
if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
return (ptr);
}
