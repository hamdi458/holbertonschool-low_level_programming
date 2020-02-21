#include "holberton.h"
/**
 *print_rev - fun
 *@s: var
 *
 *
 */
void print_rev(char *s)
{

int i, j;
j = 0;
for (i = 0; s[i] != '\0'; i++)
j = j + 1;
j--;
for (i = j; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
