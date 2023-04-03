#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @b: character.
 * @s: character.
 * @n: unsigned integer.
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; p < n; p++)
	{
		s[p] = b;
	}
	return (s);
}
