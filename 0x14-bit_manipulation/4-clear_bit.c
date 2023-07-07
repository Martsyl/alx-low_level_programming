#include <stdio.h>
#include "main.h"

/**
 * clear_bit - check the code
 * @n: pointer int
 * @index: int
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;

	if (*n & i)
		*n ^= i;
	return (1);

}

