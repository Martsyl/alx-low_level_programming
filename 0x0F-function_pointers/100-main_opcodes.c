#include <stdio.h>
#include <stdlib.h>
/**
 * main - check code
 * @argc: num of arg
 * @argv: array of arg
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int no_bytes;
	int i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	no_bytes = atoi(argv[1]);
	if (no_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < no_bytes; i++)
	{
		if (i == no_bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx", arr[i]);
	}
	return (0);
}
