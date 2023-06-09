#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isdigit - Entry point
 * @str: character
 * Return: Always 0 (Success)
 */
int _isdigit(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: integer
 * @argv: char
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int count1 = 1;
	int strconvert;

	while (count1 < argc)
	{
		if (_isdigit(argv[count1]))
		{
			strconvert = atoi(argv[count1]);
			sum = sum + strconvert;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count1++;
	}
	printf("%d\n", sum);
	return (0);
}

