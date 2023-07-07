#include <stdio.h>
#include "main.h"

/**
 * set_bit - check the code
 * @n: int pointer
 * @index: int
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = (*n | i);
	return (1);
}

