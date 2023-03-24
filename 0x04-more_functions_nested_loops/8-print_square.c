#include "main.h"

/**
 * print_square - check the code
 *@size: size of the square
 * Return: Always 0.
 */
void print_square(int size)
{
	int u;
	int j;

	for (u = 0; u < size; u++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (u != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
