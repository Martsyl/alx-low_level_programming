#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 * @dest: character
 * @src: character
 * @n: integer
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int t = 0;
	int l = 0;

	while (dest[t] != '\0')
	{
		t++;
	}
	while (l < n && src[l] != '\0')
	{
		dest[t] = src[l];
		t++;
		l++;
	}
	dest[t] = '\0';

	return (dest);
}
