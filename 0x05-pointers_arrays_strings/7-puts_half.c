#include <stdio.h>
#include "holberton.h"

/**
 * puts_half - Prints a string followed by a new line to stdout
 * @str: The string to be printed
 */

void puts_half(char *str)
{
int l = 0;
int n = 0;
while (str[n++])
{
l++;
}
if (l % 2 == 0)
{
l = l / 2;
}
else
{
l = (l - 1) / 2;
l = (l + 1);
}
n = l;
while (str[l++])
{
_putchar(str[n++]);
}
_putchar('\n');
}
