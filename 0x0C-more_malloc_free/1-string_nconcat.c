#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1: character
 * @s2: character
 * @n: integer
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int r1;
	unsigned int r2;
	unsigned int i;
	unsigned int r3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (r1 = 0; s1[r1] != '\0'; r1++)
		;
	for (r2 = 0; s2[r2] != '\0'; r2++)
		;
	if (n > r2)
		n  = r2;
	r3  = r1 + n;
	concat = malloc(r3 + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < r3; i++)
	{
		if (i < r1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - r1];
	}
	concat[i] = '\0';
	return (concat);
}

