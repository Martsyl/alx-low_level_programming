#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: int.
 * @argv: character.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

