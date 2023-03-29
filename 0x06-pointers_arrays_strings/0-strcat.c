#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code
 * @dest: character
 * @src: character
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int o = 0;
	int k = 0;

	while (dest[o] != '\0')
	{
		o++;
	}
	for (k = 0; src[k] != '\0'; k++, ++o)
	{
		dest[o] = src[k];
	}
	dest[o] = '\0';

	return (dest);
}
