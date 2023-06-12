#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 success or -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int Openfile, Writefile, lengh = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengh = 0; text_content[lengh];)
			lengh++;
	}

	Openfile = open(filename, O_WRONLY | O_APPEND);
	Writefile = write(Openfile, text_content, len);

	if (Openfile == -1 || Writefile == -1)
		return (-1);

	close(Openfile);

	return (1);
}
