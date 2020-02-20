#include "holberton.h"
#include <stdio.h>
/**
 *rot13 - fun
 *@c: var
 *Return: 0
 */
char *rot13(char *c)
{
char remp[] = "abcdefghijklmnopqrstuvwxyz";
char remp1[] = "nopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; c[i] != '\0'; i++)
for (j = 0; j < 26; j++)
{
if (c[i] == remp[j])
{
c[i] = remp1[j];
break;
}
}
return (c);
}
