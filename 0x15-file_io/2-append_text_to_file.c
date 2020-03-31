#include "holberton.h"
/**
 * append_text_to_file - function that appends text to a file
 * @filename: var
 * @text_content: var
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int s, j, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (s = 0; text_content[s]; s++)
		;
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	j = write(i, text_content, s);
	if (j == -1)
		return (-1);
	close(i);
	return (1);
}
