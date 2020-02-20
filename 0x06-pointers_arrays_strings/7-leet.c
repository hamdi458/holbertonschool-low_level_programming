#include "holberton.h"
#include <stdio.h>
/**
 *leet - fun
 *@c: var
 *Return: 0
 */
char *leet(char *c)
{
char remp[] = "aAeEoOtTlL";
char remp1[] = "43071";
int i, j;
for (i = 0; c[i] != '\0'; i++)
for (j = 0; remp[j] != '\0'; j++)
if (c[i] == remp[j])
c[i] = remp1[j / 2];
return (c);
}
