#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int mpo, vsi;
	int count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	mpo = open(filename, O_RDWR | O_APPEND, 0666);

	if (mpo == -1)
	{
		return (-1);
	}
	if  (text_content)
	{
		while (text_content[count])
		{
			count++;
		}
		vsi = write(mpo, text_content, count);
		if (vsi != count)
		{
			return (-1);
		}
	}
	close(mpo);
	return (1);
}
