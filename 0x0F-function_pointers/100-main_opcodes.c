#include <stdlib.h>
/**
 * main - main function.
 * @argc: var argc
 * @argv: var argv
 * Return: 0
 *
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	else if (argv[1][0] == '-')
	{
		puts("Error");
		exit(2);
	}
	return (0);
}
