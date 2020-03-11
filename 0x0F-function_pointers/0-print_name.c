#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - fun void
 * @name: var of name
 * @f: fun
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && *f != NULL)
f(name);
}
