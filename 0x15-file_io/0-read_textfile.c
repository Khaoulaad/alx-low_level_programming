#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - Reads a text file and prints it to POSIx
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters o be read or written
 *
 * Return: If the function fails or filename is NULL - 0.
 *         readfile -  number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t Openfile, Readfile, Writefile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	Openfile = open(filename, O_RDONLY);
	Readfile = read(Openfile, buffer, letters);
	Writefile = write(STDOUT_FILENO, buffer, Readfile);

	if (Openfile == -1 || Readfile == -1 || Writefile == -1
|| Readfile != Writefile)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(Openfile);

	return (Writefile);
}
