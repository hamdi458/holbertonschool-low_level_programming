#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - fun
 * @size: var size of array
 * @c: var
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ar;
ar = malloc(size * sizeof(char));
if (ar == 0)
return ("null");
if (size == 0)
return (0);
for (i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);
}
