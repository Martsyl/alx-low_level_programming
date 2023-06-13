#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for ALX School students.
 * @s1: char
 * @s2: char
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *add;
	int i;
	int e;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	e = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[e] != '\0')
	{
		e++;
	}
	add = malloc(sizeof(char) * (i + e + 1));
	if (add == NULL)
		return (NULL);
	i = 0;
	e = 0;
	while (s1[i] != '\0')
	{
		add[i] = s1[i];
		i++;
	}
	while (s2[e] != '\0')
	{
		add[i] = s2[e];
		i++;
		e++;
	}
	add[i] = '\0';
	return (add);
}

