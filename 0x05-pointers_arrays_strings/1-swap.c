#include "main.h"
/**
 * swap_int - swapping integers;
 * @a: first integer
 * @b: second integer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
