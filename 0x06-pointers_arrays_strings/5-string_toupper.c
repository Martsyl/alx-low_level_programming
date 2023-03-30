#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 * @p: characters
 * Return: Always 0.
 */
char *string_toupper(char *p)
{
	int i = 0;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
			p[i] = p[i] - 32;
	}
	return (p);
}
