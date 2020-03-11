#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *@argc:var argc
 *@argv: var argv
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
int i, j;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (strlen(argv[2] != 1)
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == '%' || argv[2][0] == '/') && (argv[3][0] == '0'))
{
printf("Error\n");
exit(100);
}
i = atoi(argv[1]);
j = atoi(argv[3]);
printf("%d\n", get_op_func(argv[2])(i, j));
return (0);
}
