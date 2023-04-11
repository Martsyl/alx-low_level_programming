#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for ALX School students.
 * @str: chae
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *dup;
	int i;
	int t = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (t = 0; str[t]; t++)
	{
		dup[t] = str[t];
	}
	return (dup);
}
