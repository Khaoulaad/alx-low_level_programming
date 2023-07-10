#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         success- 1.
 */
int create_file(const char *filename, char *text_content)
{
	int Openfile, Writefile, lengh = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengh = 0; text_content[lengh];)
			lengh++;
	}

	Openfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	Writefile = write(Openfile, text_content, lengh);

	if (Openfile == -1 || Writefile == -1)
		return (-1);

	close(Openfile);

	return (1);
}


