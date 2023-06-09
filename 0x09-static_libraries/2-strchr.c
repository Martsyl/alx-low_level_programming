#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the codei
 * @s: character pointer.
 * @c: character to checked
 * Return:  str or NULL.
 */
char *_strchr(char *s, char c)
{
	int g = 0;

	for (; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
		{
			return (&s[g]);
		}
	}
	return (0);
}
