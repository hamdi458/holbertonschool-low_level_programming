#include <stdio.h>
#include <stdlib.h>
/**
 *main -  blabla
 *@argc: var
 *@argv: var
 *
 *Return: 0
 */
int main(int argc, char **argv)
{
int x, y, mul;
if (argc != 3)
printf("Error\n");
else
{
x = atoi(argv[1]);
y = atoi(argv[2]);
mul = x *y;
printf("%d\n", mul);
}
return (1);
}
