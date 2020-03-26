#include "holberton.h"
/**
 * flip_bits -  returns the number of bits you would need to flip
 *to get from one number to another.
 * @n: var
 * @m: bar
 *
 * Return: sum bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nom = n ^ m;
	int s = 0, index = 64;

	while (index > 0)
	{
		if (((nom >> index) & 1) == 1)
			s++;
		index--;
	}
	return (s);
}
