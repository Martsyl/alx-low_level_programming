#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x
 */

void print_alphabet_x10(void)
{
	int ten;
	char lw;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lw = 'a';  lw <= 'z'; lw++)
			_putchar(lw);
		_putchar('\n');
	}
}
