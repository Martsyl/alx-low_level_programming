#include <stdio.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: char
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	argc = argc - 1;
	printf("%d\n", argc);
	return (0);
}

