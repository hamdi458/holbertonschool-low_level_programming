#include "calc.h"
#include <stdio.h>
/**
 * get_op_func - Select correct operation to do
 * @s: Operator
 *
 * Return: A pointer the function
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
while (i < 5)
{
if (s == ops[i].op)
return (f.ops[i];
i++;
}
return (NULL);
}
