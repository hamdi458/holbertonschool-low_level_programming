#include "holberton.h"
/**
 * jack_bauer - checks for alphabetic characters
 * @c: Variable containing the letter to be checked
 *
 * Return: 1 if c is a letter, 0 not alpha
 *
 */
void jack_bauer(void)
{
int i;
int j; 
for(i=0; i<=23; i++)
for(j=0; j<=59; j++)
{
_putchar(i/10+'0');
_putchar(i%10+'0');
_putchar(' ');
_putchar(':');
_putchar(j/10+'0');
_putchar(j%10+'0');
_putchar('\n');
}
}
