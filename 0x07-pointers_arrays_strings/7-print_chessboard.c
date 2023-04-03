#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - check the code
 * @a: character of an array
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int y;
	int t;

	for (y = 0; y < 8; y++)
	{
		for (t = 0; t < 8; t++)
		{
			_putchar(a[y][t]);
		}
		_putchar('\n');
	}
}
