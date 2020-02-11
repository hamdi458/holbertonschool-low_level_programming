#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 *
 * @c: Variable containing the letter to be checked
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 65 && c <= 90)
return (0);
else
return (1);
}
