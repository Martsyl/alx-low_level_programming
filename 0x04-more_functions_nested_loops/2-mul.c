#include "main.h"
#include <stdio.h>

/**
 * mul - variable multiplicate.
 *
 * @b: integer
 * @a: integer
 * Return: Always 0.
 */
int mul(int a, int b)
{
	if ((a <= 0 || a >= 0) && (b <= 0 || b >= 0))
	{
		return (a * b);
	}
	else
		return (0);
}
