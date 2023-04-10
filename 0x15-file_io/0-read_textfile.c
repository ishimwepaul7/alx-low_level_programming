#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -print to STDOUT
 * @filename: being read
 * @letters: letters to be read
 * Return: w-actual number of bytes read and printed 0 when function fails or filename is NULL.
 */
sszize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t mn;
	ssize_t z;
	ssize_t y;

	mn = open(filename, O_RDONLY);
	if (mn == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(mn, buf, letters);
	z = write(STDOUT_FILEnO, buf, y);

	free(buf);
	close(mn);
	return (z);
}
