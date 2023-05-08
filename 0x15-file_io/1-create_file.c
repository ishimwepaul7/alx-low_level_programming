#include "main.h"

/**
 * create_file - create a file.
 * @filename: A pointer to the name of file to create.
 * @text_content: A pointer to string to write to the file
 *
 * Return: If the function fails - -1
 * otherwise - 1
 */
int create_file(const char *filename, char *text_content)
{
	int me, z, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	me = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	z = write(me, text_content, len);

	if (me == -1 || z == -1)
		return (-1);

	close(me);

	return (1);
}
