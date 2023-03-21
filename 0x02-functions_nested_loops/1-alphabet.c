#include "main.h"
/**
 * main - Entry point
 * print_loweralpha - prints lower alpha
 * Description: Does my stuff explained.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lw;

	for (lw = 'a'; lw++ <= 'z'; lw++)
		_putchar(lw);
	_putchar('\n');
}
