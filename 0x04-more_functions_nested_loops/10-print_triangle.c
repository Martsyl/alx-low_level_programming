#include "main.h"

/**
 * print_triangle - check the code
 * @size: num of lines
 * Return: no return
 */

void print_triangle(int size)
{
	int k;
	int z;

	for (k = 0; k < size; k++)
	{
		for (z = 1; z < (size - k); z++)
			_putchar(' ');
		for (z--; z < size; z++)
			_putchar(35);
		if (k < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
