#include  "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 * @haystack: character.
 * @needle: character
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *u = haystack;
		char *w = needle;

		while (*u == *w && *w != '\0')
		{
			u++;
			w++;
		}
		if (*w == '\0')
			return (haystack);
	}
	return (0);
}
