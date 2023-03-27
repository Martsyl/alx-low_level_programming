#include "main.h"

/**
 * print_rev - check the code
 *@s: char
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	for (count = count - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
