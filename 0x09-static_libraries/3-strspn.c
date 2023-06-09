#include "main.h"
#include <stdio.h>

/**
 * _strspn - check the code
 * @s: first string to be matched.
 * @accept: character.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int e;

	while (*s)
	{
		for (e = 0; accept[e]; e++)
		{
		if (*s == accept[e])
		{
			n++;
			break;
		}
		else if (accept[e + 1] == '\0')
			return (n);
		}
		s++;
	}
	return (n);
}
