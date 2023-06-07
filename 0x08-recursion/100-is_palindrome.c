#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - check the code
 * @s: character
 * Return: Always func.
 */
int is_palindrome(char *s)
{
	if (*s == 0 || *s == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, check_palindromelen(s)));
}

/**
 * check_palindromelen - check the code
 * @p: character
 * Return: function.
 */
int check_palindromelen(char *p)
{
	if (*p == '\0')
	{
		return (0);
	}
	return (1 + check_palindromelen(p + 1));
}

/**
 * check_palindrome - check the code
 * @a: character.
 * @j: integer
 * @lent: integer
 * Return: Always func.
 */
int check_palindrome(char *a, int j, int lent)
{
	if (*(a + j) != *(a + lent - 1))
	{
		return (0);
	}
	if (j >= lent)
	{
		return (1);
	}
	return (check_palindrome(a, j + 1, lent - 1));
}
