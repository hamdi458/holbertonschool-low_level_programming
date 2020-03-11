#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - fun void
 * @array: var of array
 * @size:var of size of array
 * @action: var fun
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL && size > 0 && action != NULL)
for (i = 0; i < size; i++)
action(array[i]);
}
