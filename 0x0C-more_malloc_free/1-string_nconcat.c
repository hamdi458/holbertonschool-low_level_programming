#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - fun
 * @s1: var
 * @s2: var
 *@n: var
 * Return: pointer if malloc not fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size2, size1, i, j;
char *ar = NULL;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size1 = 0;
size2 = 0;
while (s1[size1] != '\0')
size1++;
while (s2[size2] != '\0')
size2++;
if (n >= size2)
n = size2;
ar = malloc((size1 + 1 + n)*sizeof(char));
if (ar == NULL)
return (NULL);
for (i = 0; i < size1; i++)
ar[i] = s1[i];
for (j = 0; j < n; j++)
{
ar[i] = s2[j];
i++;
}
ar[i] = '\0';
return (ar);
}
