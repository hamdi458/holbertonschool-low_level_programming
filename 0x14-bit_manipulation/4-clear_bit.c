#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n:var pointer int
 * @index:  starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1;

	if (index > 64)
		return (-1);
	one <<= index;
	*n &= ~one;
	return (1);
}
