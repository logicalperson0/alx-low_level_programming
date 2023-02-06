#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: parameter
 * @text_content: parameter
 *
 * Return: 1 for Success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (!text_content)
		text_content = "";

	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
