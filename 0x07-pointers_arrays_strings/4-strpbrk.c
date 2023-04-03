#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 * @s: character.
 * @accept: cahr.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	char *st;

	while (*s != '\0')
	{
		st = accept;
		while (*st != '\0')
		{
			if (*s == *st)
			{
				return (s);
			}
			st++;
		}
		s++;
	}
	return (0);
}
