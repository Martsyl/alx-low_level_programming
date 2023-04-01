#include "main.h"
#include <stdio.h>

/**
 * leet - encoding and encryption
 *@str: character
 * Return: Always 0.
 */
char *leet(char *str)
{
	int upper[] = {65, 69, 79, 84, 76};
	int lower[] = {97, 101, 111, 116, 108};
	int encode[] = {52, 51, 48, 55, 49};
	int i;
	int v = 0;

	while (str[v] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[v] == lower[i] || str[v] == upper[i])
			{
				str[v] = encode[i];
				break;
			}
		}
		v++;
	}
	return (str);
}
