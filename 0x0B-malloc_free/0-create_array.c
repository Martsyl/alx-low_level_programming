#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @size: integer
 * @c:character
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		string[i] = c;
	}
	return (string);

}
