#include "holberton.h"

/**
 * erreur_exit - exit with nbr
 * @ch: message
 * @filename: var filename
 * @nbr_ex: exit
 * Return: void
 */
void erreur_exit(char *ch, char *filename, int nbr_ex)
{
	dprintf(STDERR_FILENO, ch, filename);
	exit(nbr_ex);
}

/**
 * _copy - copy first file to destination file
 * @loc: var first file
 * @dest: var file destination
 * Return: void
 */
void _copy(char *loc, char *dest)
{
	int i, j, ir, jw;
	char *b;

	b = malloc(1024);
	i = open(loc, O_RDONLY);
	if (i == -1)
		erreur_exit("Error: Can't read from file %s\n", loc, 98);

	j = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (j == -1)
		erreur_exit("Error: Can't write to %s\n", dest, 99);

	ir = read(i, b, 1024);
	if (ir == -1)
		erreur_exit("Error: Can't read from file %s\n", loc, 98);

	jw = write(j, b, ir);

	if (jw == -1)
		erreur_exit("Error: Can't write to %s\n", dest, 99);

	if (ir == -1)
		erreur_exit("Error: Can't read from file %s\n", loc, 98);
	if (close(j) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
		exit(100);
	}
	close(j);
	if (close(i) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
		exit(100);
	}
	close(i);
}
/**
 *main -main copies a file to another file
 *@ac: argc
 *@av: argv
 *Return: 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_copy(av[1], av[2]);

	return (0);
}
