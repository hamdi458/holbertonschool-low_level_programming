#include "holberton.h"
/**
 * print_sign - check the number
 * @n: number recieved
 *
 *Return: 1 greater than zero  0 if is zero -1 if less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
