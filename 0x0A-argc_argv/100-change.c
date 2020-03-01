#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Print the minumu, number of coins needed
 *@argc: nbr argument
 *@argv: argument number
 *Return: 0
 */
int main(int argc, char *argv[])
{
int x, y;
y = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
if (x < 0)
{
printf("%d\n", 0);
return (0);
}
if (x % 25 >= 0)
{
y += x / 25;
x = x % 25;
}
if (x % 10 >= 0)
{
y += x / 10;
x = x % 10;
}
if (x % 5 >= 0)
{
y += x / 5;
x = x % 5;
}
if (x % 2 >= 0)
{
y += x / 2;
x = x % 2;
}
if (x % 1 >= 0)
y += x / 1;
printf("%d\n", y);
return (0);
}
