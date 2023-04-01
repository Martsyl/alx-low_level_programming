#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 * @str: character
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i = 0;
	int w;
	int word[] = {32, 44, 39, 59, 46,  41, 33, 63, 34, 40, 123, 125, 9, 10};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
		}
	if (str[i] == ' ')
	{
		i++;

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
	}
	for (w = 0; w < 14; w++)
	{
		if (str[i] == word[w])
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
				continue;
			}
		}
	}
	}
	return (str);
}
