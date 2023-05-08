#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: filename
 * @text_content: text to append
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int writefile;
	int letters;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	for (letters = 0; text_content[letters]; letters++)
		;
	writefile = write(fp, text_content, letters);
	if (writefile == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
