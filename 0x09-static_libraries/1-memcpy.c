#include "main.h"
#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @src: character.
 * @dest: character to be copied.
 * @n: integer
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
