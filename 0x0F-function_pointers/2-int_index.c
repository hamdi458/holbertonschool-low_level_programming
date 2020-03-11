#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - fun int
 * @array: var array
 * @size: var of size of aaray
 * @cmp: fun
 *
 * Return: Index of first element when secc or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
