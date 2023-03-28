#include "main.h"

/**
 * puts2 - check the code
 * @str:char
 * Return: Always 0.
 */
void puts2(char *str)
{
	int getlen = 0;

	for (; str[getlen] != '\0'; getlen++)
	{
		if ((getlen % 2) == 0)
			_putchar(str[getlen]);
		else
			continue;
	}
	_putchar('\n');
}
