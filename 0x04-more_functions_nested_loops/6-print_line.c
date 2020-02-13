#include "holberton.h"
/**
 * print_line - prints the numbers, from 0 to 9.
 *@n : the number of _
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
if (n > 0)
for (i = 0; i < n; i++)
_putchar('_');
_putchar('\n');
}
