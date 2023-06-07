#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 * @n:integer
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_check(n, 0));
}
/**
 * _sqrt_check - check the code
 * @m:integer
 * @m2:integer
 * Return: Always 0.
 */
int _sqrt_check(int m, int m2)
{
	if (m2 * m2 > m)
	{
		return (-1);
	}
	if (m2 * m2 == m)
	{
		return (m2);
	}
	return (_sqrt_check(m, m2 + 1));
}
