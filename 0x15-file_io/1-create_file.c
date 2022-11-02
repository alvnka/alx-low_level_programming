#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * @text_content: string to be put in file
 * Return:
 *	1 on success
 *	-1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fld, letters, rwr;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	fld = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fld == -1)
	{
		exit(-1);
	}

	for (letters = 0; text_content[letters] != '\0'; letters++)
	{
		;
	}
	letters = letters + 1;

	rwr = write(fld, text_content, letters);

	if (rwr == -1)
	{
		return (-1);
	}
	close(fld);

	return (1);
}
