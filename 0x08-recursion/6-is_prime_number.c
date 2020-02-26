#include "holberton.h"

/**
 * prime_ - fun
 * @x: var
 * @y: var
 *
 * Return: 1 if is prime 0 otherwise
 */

int prime_(int x, int y)
{
if (y < 0)
return (0);
if (x == y)
return (1);
if (y % count == 0)
return (0);
else
return (prime_(++x, y));
}

/**
 * is_prime_number - function prime
 * @n:var
 *
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
if (n == 1)
return (0);
return (prime_(2, n));
}
