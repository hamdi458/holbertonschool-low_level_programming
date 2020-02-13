#include "holberton.h"
/**
 * print_triangle - print triangle .
 *@size : the number of #
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i;
int j;
int k;
if (size <= 0)
_putchar('\n');
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
_putchar(' ');
for (k = 1; k <= i; k++)
_putchar('#');
_putchar('\n');
}
}
