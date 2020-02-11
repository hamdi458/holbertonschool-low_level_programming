#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - adds two integers and returns the result
 * @n: Variable containing integer
 *
 * Return: 0
 *
 */
void print_to_98(int n)
{

xint i;
if (n == 98)
{
printf("%d\n", n);
}
else
if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i > 98)
printf(", ");
}
printf("\n");
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i < 98)
printf(", ");
}
printf("\n");
}
}
