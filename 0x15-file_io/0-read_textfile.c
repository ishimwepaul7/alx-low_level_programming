#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile -print to STDOUT
 * @filename: being read
 * @letters: letters to be read
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int zf, mno, zki;
	char *cf;

	if (filename == NULL)
		return (0);


	zf = open(filename, O_RDONLY);

	if (zf == -1)
		return (0);

	cf = malloc(sizeof(char) * letters + 1);
	if (cf == NULL)
		return (0);

	mno = read(zf, cf, letters);
	if (mno == -1)
		return (0);

	cf[letters] = '\0';

	zki = write(1, cf, mno);
	if (zki == -1)
		return (0);

	close(zf);
	free(cf);
	return (zki);
}
