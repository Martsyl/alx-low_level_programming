#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - check the code
 * @filename: char
 * @letters: size
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fname;
	int writefile;
	int readfile;
	char *filesize = malloc(sizeof(char) * (letters));

	if (filesize == NULL)
		return (0);

	fname = open(filename, O_RDONLY);

	if (filename == NULL)
	{
		return (0);
	}
	if (fname == -1)
		return (0);
	readfile = read(fname, filesize, letters);
	writefile = write(STDOUT_FILENO, filesize, readfile);

	close(fname);
	free(filesize);

	return (writefile);


}
