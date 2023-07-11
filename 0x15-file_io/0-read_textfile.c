#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that  reads the
 * text file print to the POSIX STDOUT.
 * @filename: text file being read
 * @letters: number of letters that should be read and printed.
 * Return: the actual number of bytes/letters read and printed
 *        0 when function fails or filename is NULL
 *        or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
