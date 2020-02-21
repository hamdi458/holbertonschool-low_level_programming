#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - fun
 * @s: var
 */

void rev_string(char *s)
{
int j, i;
char ch;
j = 0;
while (*(s + j) != '\0')
j++;
j--;
for (i = 0; i < j; i++)
{
ch = *(s + j);
*(s + j) = *(s + i);
*(s + i) = ch;
j--;
}
}
