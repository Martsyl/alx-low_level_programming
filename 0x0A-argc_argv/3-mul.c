#include <stdio.h>

/**
 * _atoi - Entry point
 * @str: character
 * Return: Always 0 (Success)
 */
int _atoi(char *str)
{
	int fres = 0;
	int posign = 1;
	int nosign = 0;

	if (str[0] == '-')
	{
		posign = -1;
		nosign++;
	}
	for (; str[nosign] != '\0'; ++nosign)
		fres = fres * 10 + str[nosign] - '0';
	return (posign * fres);
}

/**
 * main - Entry point
 * @agrc: int
 * @agrv: `char
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result;
	int num0;
	int num1;
	
	if ( argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num0 = _atoi(argv[1]);
	num1 = _atoi(argv[2]);
	result = num0 * num1;
	printf("%d\n", result);
	return (0);
}
