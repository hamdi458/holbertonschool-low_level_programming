#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - fun
 * @str: var
 */

void puts2(char *str)
{
int i, j;
j = 0;
while (str[j] != '\0')
j++;
for (i = 0; i <= j - 1; i = i + 2)
_putchar (*(str + i));
_putchar ('\n');
}
