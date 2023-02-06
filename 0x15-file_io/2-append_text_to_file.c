#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: parameter
 * @text_content: parameter
 *
 * Return: 1 on Success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (text_content == NULL)
	{
		if (!filename)
			return (-1);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;

	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	return (1);
}
