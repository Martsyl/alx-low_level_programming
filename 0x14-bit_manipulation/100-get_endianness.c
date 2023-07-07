#include <stdio.h>
#include "main.h"
/**
 * get_endianness - check the code
 *
 * Return: Always 0.
 */
int get_endianness(void)
{
	unsigned int q = 1;
	char *r;

	r = (char *)&q;
	return ((int)*r);
}

