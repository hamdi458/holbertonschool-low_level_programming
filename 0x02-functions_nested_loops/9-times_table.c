#include "holberton.h"
/**
 * times_table - ptints the 9 times table starting with 0
 *
 *Return: nothing
 */
void times_table(void)
{
int r, c, k;
for (r = 0; r <= 9; r++)
{
for (c = 0; c <= 9; c++)
{
k = r * c;
if (k >= 10)
{
_putchar(' ');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
else
{
if (c != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(k + '0');
}
if (c != 9)
_putchar(',');
if (c == 9)
_putchar('\n');
}
}
}
