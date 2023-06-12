#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to filename.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: If the function fails -1.
 *         If the file exists 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int y, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	y = open(filename, O_WRONLY | O_APPEND);
	x = write(y, text_content, len);

	if (x == -1 || y == -1)
		return (-1);

	close(y);

	return (1);
}
