#include "main.h"

/**
 * append_text_to_file - This function appends
 * the text at the end of a file.
 * @filename: this is the name of the file.
 * @text_content: The NULL Terminated string to add to the end of the file.
 *
 * Return: If the filename is NULL OR the function fails, -1.
 *         If the file does not exist/user lacks the write permissions, -1.
 *         If the file exists or the function is successful, 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
