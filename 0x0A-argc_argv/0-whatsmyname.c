#include <stdio.h>
/**
 * main - prints name
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", argv[0]);
}
return (0);
}
