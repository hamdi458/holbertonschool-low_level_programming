#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 *
 * @ch: Variable containing the letter to be checked
 * Return: Always 0.
 */
int _islower(int ch)
{
int c = ch;
if (c >= 65 && c <= 90)
return (0);
else
return (1);
}
