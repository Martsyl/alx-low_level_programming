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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
