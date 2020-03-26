#include "holberton.h"

/**
 * print_binary - prints binary representation of a number
 * @n: var int
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int s = 0;
	unsigned long int num = n;

	if (n == 0)
		_putchar(48);
	while (num > 0)
	{
		num >>= 1;
		s++;
	}
	while (s > 0)
	{
		s--;
		_putchar(((n >> s) & 1) + '0');
	}
}
