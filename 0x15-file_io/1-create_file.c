#include "holberton.h"
/**
 * create_file - creates a file.
 * @filename: var filename
 * @text_content: var
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, j;
	int s = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (s = 0; text_content[s]; s++)
		;
	i = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (i == -1)
		return (-1);
	j = write(i, text_content, s);
	if (j < 0)
		return (-1);
	return (1);

}
