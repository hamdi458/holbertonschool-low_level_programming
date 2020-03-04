#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Duplicates a string.
 * @s1: var
 * @s2: var
 * Return: String duplicated
 */
char *str_concat(char *s1, char *s2)
{
char *ar = NULL;
int j, i, size1, size2;
size1 = 0;
size2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[size1] != '\0')
size1++;
while (s2[size2] != '\0')
size2++;
ar = malloc((size1 + size2 + 1) * sizeof(char));
if (ar == NULL)
return (NULL);
for (i = 0; i < size1; i++)
ar[i] = s1[i];
for (j = 0; j <= size2; j++)
{
ar[i] = s2[j];
i++;
}
return (ar);
}
