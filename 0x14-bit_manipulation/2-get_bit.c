#include <stdio.h>
#include "main.h"

/**
 * get_bit - check the code
 * @n: int
 * @index: index
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int get_len;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	for (get_len = 0; get_len < 63; n >>= 1, get_len++)
	{
		if (index == get_len)
		{
			return (n & 1);
		}
	}
	return (-1);
}
