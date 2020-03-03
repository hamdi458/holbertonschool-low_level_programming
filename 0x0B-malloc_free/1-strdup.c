#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: string to be duplicated.
 *
 * Return: String duplicated
 */
char *_strdup(char *str)
{
char *ar = NULL;
unsigned int i, size = 0;
if (str == NULL)
return (NULL);
while (str[size] != '\0')
size++;
ar = malloc((size + 1) * sizeof(char));
if (ar == NULL)
return (NULL);
for (i = 0; i <= size; i++)
ar[i] = str[i];
return (ar);
}
