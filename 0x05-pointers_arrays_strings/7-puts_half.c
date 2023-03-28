#include "main.h"

/**
 * puts_half - check the code
 * @str:chae
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int getlen = 0;

	while (*str != '\0')
	{
		getlen++;
		str++;
	}
	str -= (getlen / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
