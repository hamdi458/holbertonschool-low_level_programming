#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - fun int
 * @s: var op
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[6] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
i = 0;
while (i <= 4)
{
if (*s == *(ops + i)->op)
return ((ops + i)->f);
i++;
}
return (NULL);
}
