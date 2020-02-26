#include "holberton.h"
/**
 * _strlen_recursion - function length
 *@ch:var chaine
 *Return: length of s
 */
int _strlen_recursion(char *ch)
{
if (*ch == '\0')
{
return (0);
}
ch++;
return (1 + _strlen_recursion(ch));
}

/**
 * palindrome - fun
 *@ch: var
 *@l: var
 *Return: value
 */
int palindrome(char *ch, int l)
{
if (l <= 1)
return (1);
else if (*ch == *(ch + l - 1))
return (palindrome(ch + 1, l - 2));
else
return (0);
}

/**
 * is_palindrome - verify palindrome
 *@s: string
 *Return: 1 if palindrome and 0 if is not
 */
int is_palindrome(char *s)
{
int l;
l = _strlen_recursion(s);
if (l <= 1)
return (1);
return (palindrome(s, l));
}
