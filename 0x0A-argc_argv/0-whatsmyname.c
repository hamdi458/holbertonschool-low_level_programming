#include <stdio.h>
/**
 *main -  prints its name.
 *@argc: var
 *@argv:var
 *
 *Return: int
 */
int main(int argc, char **argv)
{
while (argc != '\0')
  {
printf("%s\n", argv[0]);
argc--;
}
return (0);
}
