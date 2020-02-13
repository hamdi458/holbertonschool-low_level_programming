#include "holberton.h"
/**
 * print_numbers - prints the numbers, from 0 to 9.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
int i;
if (n > 0)
for (i = 0; i <= n; i++)
_putchar('_');
_putchar('\n');
}
