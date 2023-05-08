#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - check the code
 * @filename: filenae
 * @text_content: content
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int createfile;
	int writefile;
	int letters;

	if (filename == NULL)
	{
		return (-1);
	}

	createfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (createfile == 1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
		;
	writefile = write(createfile, text_content, letters);
	if (writefile == -1)
		return (-1);
	close(createfile);
	return (1);
}
