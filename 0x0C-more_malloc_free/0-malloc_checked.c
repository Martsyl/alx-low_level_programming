#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check the code
 * @b: unsigned it
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	char *pnt;

	pnt = malloc(b);
	if (pnt == NULL)
	{
		exit(98);
	}
	return (pnt);
}
