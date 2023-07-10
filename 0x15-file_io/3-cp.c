#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * error_message- check the code
 * @file_from: file
 * @file_to: file
 * @argv: char
 * Return: Always 0.
 */
void error_message(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code
 * @argc: num ar
 * @argv: arg
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int errors;
	ssize_t num_chars;
	ssize_t writefile;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_message(file_from, file_to, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_from, buf, 1024);
		if (num_chars == -1)
			error_message(-1, 0, argv);
		writefile = write(file_to, buf, num_chars);
		if (writefile == -1)
			error_message(0, -1, argv);
	}
	errors = close(file_from);
	if (errors == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	errors = close(file_to);
	if (errors == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

