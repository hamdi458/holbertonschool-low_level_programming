#include "holberton.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename :var filename
 *@letters : var lettre
 *Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	int s, i, j;

	if (filename == NULL)
		return (0);
	ch = malloc(sizeof(size_t) * letters);
	s = open(filename, O_RDWR);
	if (s == -1)
		return (0);
	i = read(s, ch, letters);
	if (i < 0)
		return (0);
	j = write(STDOUT_FILENO, ch, i);
	if (j < 0)
		return (0);
	free(ch);
	close(s);
	return (j);
}
