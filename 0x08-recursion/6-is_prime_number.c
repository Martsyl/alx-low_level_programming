#include "main.h"
#include <stdio.h>

/**
 * is_prime_number- check the code
 * @n: integer
 * Return: func.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, n - 1));
}
/**
 * prime_check - check the code
 * @r: integer
 * @y: integer
 * Return: func.
 */
int prime_check(int r, int y)
{
	if (y == 1)
	{
		return (1);
	}
	if (r % y == 0 && y > 0)
	{
		return (0);
	}
	return (prime_check(r, y - 1));
}
