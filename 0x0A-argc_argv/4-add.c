#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - fun
 * @argc: argc var
 * @argv: argv var
 *
 * Return:0
 */

int main(int argc, char **argv)
{
int i, ch, sum = 0;
if (argc < 2)
printf("0\n");
else
{
for (i = 1; i < argc; i++)
{
for (ch = 0; argv[i][ch] != '\0'; ch++)
if (isdigit(argv[i][ch]) == 0)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
