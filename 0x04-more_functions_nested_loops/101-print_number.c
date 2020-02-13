#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * print_number - print number.
 *@size : the number of #
 * Return: Always 0.
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if ((n / 10) > 0)
print_number(n / 10);
_putchar((n % 10) + '0');
}
