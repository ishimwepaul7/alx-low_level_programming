#include "main.h"
/**
 * append_text_to_file - Append text at the end of a file
 * @filename: A pointer to the name
 * @text_content: the string to add
 *
 * Return: if the function fails or file is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, z, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	z = write(p, text_content, len);

	if (p == -1 || z == -1)
		return (-1);

	close(p);

	return (1);
}
