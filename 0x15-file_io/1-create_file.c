#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * create_file - Entry point
 * @filename: file name
 * @text_content: null terminated string
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int mpo, vsi;
	int woi = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		open(filename, O_CREAT, 0600);
	}

	mpo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (mpo == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[woi])
		{
			woi++;
		}
		vsi = write(mpo, text_content, woi);

		if (vsi != woi)
		{
			return (-1);
		}
	}
	close(mpo);
	return (1);
}
