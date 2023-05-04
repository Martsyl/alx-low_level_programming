#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: const char
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;
	int get_base;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--, get_base = 1; i >= 0; i--, get_base *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			decimal += get_base;
		}
	}
	return (decimal);
}
