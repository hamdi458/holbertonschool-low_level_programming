#include "holberton.h"
/**
 * factorial - function
 * @n: var
 * Return: 0
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n > 0)
{
return (n * factorial(n - 1));
}
else
return (1);
}
