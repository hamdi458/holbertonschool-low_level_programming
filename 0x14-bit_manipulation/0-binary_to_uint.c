#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: var string
 * Return: nbr decimal or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
		{
			n = n << 1;
			n |= 1;
		}
		else
			n <<= 1;
		i++;
	}
	return (n);
}
