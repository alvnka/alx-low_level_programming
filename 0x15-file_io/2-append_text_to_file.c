#include "main.h"

/**
 * append_text_to_file - function appending text
 *	at end of file
 * @filename: name of the file
 * @text_content: content to be appended
 * Return:
 *	1 on success
 *	-1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int rwr, fld, letter;

	if (filename == NULL)
	{
		return (-1);
	}

	fld  = open(filename, O_APPEND | O_WRONLY);

	if (fld == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
		{
			;
		}

		rwr = write(fld, text_content, letter);
		if (rwr == -1)
		{
			return (-1);
		}
	}
	close(fld);
	return (1);
}

