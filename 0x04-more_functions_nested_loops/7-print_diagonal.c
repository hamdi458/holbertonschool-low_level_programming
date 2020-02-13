#include "holberton.h"
/**
 * print_diagonal - prints the numbers, from 0 to 9.
 *@n : the number of _
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
