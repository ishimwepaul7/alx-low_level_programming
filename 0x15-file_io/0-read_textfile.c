#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read textfile print to stdout
 * @filename: text file being read
 * @letters: number of letters
 * Return: w- actual number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t me;
	ssize_t z;
	ssize_t u;

	me = open(filename, O_RDONLY);
	if (me == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	u = read(me, buf, letters);
	z = write(STDOUT_FILENO, buf, u);

	free(buf);
	close(me);
	return (z);
}
