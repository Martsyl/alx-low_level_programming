#include "main.h"

/**
 * print_diagonal - check the code
 *@n: number of lines
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int z;
	int f;

	for (z = 0; z < n; z++)
	{
		for (f = 0; f < z; f++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (z < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
